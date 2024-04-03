#include <wx/dc.h>
#include <memory>
#include <cmath>
#include "ChartClass.h"

# define M_PI 3.14159265358979323846


ChartClass::ChartClass(std::shared_ptr<ConfigClass> c)
{
    cfg= std::move(c);
    x_step=200;

    Set_Range();

    Vector empty_vector;
    std::vector<Vector>::iterator it= begin_points.begin();
    begin_points.insert(it, x_step + AXIS_LINES, empty_vector);
    it = end_points.begin();
    end_points.insert(it, x_step + AXIS_LINES, empty_vector);
}

void ChartClass::Set_Range()
{
 double xmin=9999.9,xmax=-9999.9,ymin=9999.9,ymax=-9999.9;
 double x,y,step;
 int i;

 xmin=cfg->Get_x_start();
 xmax=cfg->Get_x_stop();

 step=(cfg->Get_x_stop()-cfg->Get_x_start())/(double)x_step;
 x=cfg->Get_x_start();

 for (i=0;i<=x_step;i++)
  {
   y=GetFunctionValue(x);
   if (y>ymax) ymax=y;
   if (y<ymin) ymin=y;
   x=x+step;
  }

 y_min=ymin;
 y_max=ymax;
 x_min=xmin;
 x_max=xmax;
}


double ChartClass::GetFunctionValue(double x)
{
 if (cfg->Get_F_type()==1) return x*x;
 if (cfg->Get_F_type()==2) return 0.5*exp(4*x-3*x*x);
 return x+sin(x*4.0);
}

void ChartClass::Draw(wxDC *dc, int w, int h)
{
 dc->SetBackground(wxBrush(RGB(255, 255, 255)));
 dc->Clear();
 dc->SetPen(wxPen(RGB(255, 0, 0)));
 dc->DrawRectangle(10, 10, w - 20, h - 20);
 
 dc->SetPen(wxPen(RGB(0, 0, 255)));

 SetPoints();
 Vector scale = Scale_of_Draw(w, h);

 double x_valuse[3];
 double y_valuse[3];
 for (int i = 0; i < 3; i++)
 {
     x_valuse[i] = begin_points[i + 1].GetX();
     y_valuse[i] = begin_points[i + 7].GetY();
 }

 Matrix to_scale;//wypelnienie ekranu
 to_scale.data[0][0] = scale.GetX();
 to_scale.data[1][1] = scale.GetY();
 Matrix to_mirror_X;//y do gory
 to_mirror_X.data[0][0] = 1;
 to_mirror_X.data[1][1] = -1;

 double alfa = cfg->Get_Alpha()/180 * M_PI;
 Matrix to_rotation;//obrot
 to_rotation.data[0][0] = cos(alfa);
 to_rotation.data[0][1] = -sin(alfa);
 to_rotation.data[1][0] = sin(alfa);
 to_rotation.data[1][1] = cos(alfa);

 double x_zero_zero_point = fabs(cfg->Get_x0()) * scale.GetX() + 10;
 double y_zero_zero_point = cfg->Get_y1() * scale.GetY() + 10;
 double x_translation= cfg->Get_dX();
 double y_translation = cfg->Get_dY();

 Matrix translation_to_rotation;
 translation_to_rotation.data[0][0] = 1;
 translation_to_rotation.data[1][1] = 1;
 translation_to_rotation.data[0][2] = (x_zero_zero_point+ x_translation )-(w/2.0);
 translation_to_rotation.data[1][2] = (y_zero_zero_point+ y_translation)-(h/2.0);

 Matrix translation_from_rotation;
 translation_from_rotation.data[0][0] = 1;
 translation_from_rotation.data[1][1] = 1;
 translation_from_rotation.data[0][2] =  (w / 2.0) - (x_zero_zero_point + x_translation);
 translation_from_rotation.data[1][2] = (h / 2.0) - (y_zero_zero_point + y_translation);

 Matrix to_center;//rzeby byl ustawiony tak jak ustawilismy uklad swiata
 to_center.data[0][0] = 1;
 to_center.data[1][1] = 1;
 to_center.data[0][2] = x_zero_zero_point;
 to_center.data[1][2] = y_zero_zero_point;

 Matrix translation;
 translation.data[0][0] = 1;
 translation.data[1][1] = 1;
 translation.data[0][2] = x_translation;
 translation.data[1][2] = y_translation;

 for (int i = 0; i < x_step + AXIS_LINES; i++)
 {
     line2d(to_scale, begin_points[i], end_points[i]);
     
     if (!cfg->RotateScreenCenter())//obrut wedlug srodka ukladu wspolrzednych
     {
         line2d(to_rotation, begin_points[i], end_points[i]);
     }
     else
     {
         line2d(translation_to_rotation, begin_points[i], end_points[i]);
         line2d(to_rotation, begin_points[i], end_points[i]);
         line2d(translation_from_rotation, begin_points[i], end_points[i]);
     }
     
     line2d(to_mirror_X, begin_points[i], end_points[i]);
     line2d(to_center, begin_points[i], end_points[i]);
     line2d(translation, begin_points[i], end_points[i]);  
 }
 

 for (int i = 0; i < x_step + AXIS_LINES; i++)
 {
     if(i== AXIS_LINES)
         dc->SetPen(wxPen(RGB(50, 205, 50)));
     dc->DrawLine(begin_points[i].GetX(), begin_points[i].GetY(), end_points[i].GetX(), end_points[i].GetY());
 }

 for (int i = 1; i < 4; i++)//podzialka na osi x
 {
     dc->DrawRotatedText(std::to_string(x_valuse[i-1]), begin_points[i].GetX() +(10*sin(alfa)) , begin_points[i].GetY() + (10 * cos(alfa)), cfg->Get_Alpha());
 }
 for (int i = 7; i < 10; i++)//podzialka na osi y
 {
     dc->DrawRotatedText(std::to_string(y_valuse[i-7]), begin_points[i].GetX() + (10 * sin(alfa)), begin_points[i].GetY() + (10 * cos(alfa)), cfg->Get_Alpha());
 }
}

void ChartClass::line2d(Matrix transformation, Vector &begin_line, Vector &end_line)
{
    begin_line = transformation * begin_line;
    end_line = transformation * end_line;
}

void ChartClass::SetPoints()
{
    //obliczenie prawdziwych wspolrzednych:
    //osi x
    begin_points[0].Set(x_min, 0.0);
    end_points[0].Set(x_max, 0.0);
    //podzialek na osi x
    begin_points[1].Set(x_min / 2.0, 0.05);
    end_points[1].Set(x_min / 2.0, -0.05);
    begin_points[2].Set(x_max / 3.0, 0.05);
    end_points[2].Set(x_max / 3.0, -0.05);
    begin_points[3].Set(x_max * 2.0 / 3, 0.05);
    end_points[3].Set(x_max * 2.0 / 3.0, -0.05);
    //strzalka na osi x
    begin_points[4].Set(x_max - 0.1, 0.1);
    end_points[4].Set(x_max, 0);
    begin_points[5].Set(x_max - 0.1, -0.1);
    end_points[5].Set(x_max, 0);
    //osi y
    begin_points[6].Set(0.0, y_min);
    end_points[6].Set(0.0, y_max);
    //podzialek na osi y
    begin_points[7].Set(0.03, y_min / 2.0);
    end_points[7].Set(-0.03, y_min / 2.0);
    begin_points[8].Set(0.03, y_max / 3.0);
    end_points[8].Set(-0.03, y_max / 3.0);
    begin_points[9].Set(0.03, y_max * 2.0 / 3.0);
    end_points[9].Set(-0.03, y_max * 2.0 / 3.0);
    //strzalka na osi y
    begin_points[10].Set(0.03, y_max - 0.1);
    end_points[10].Set(0, y_max);
    begin_points[11].Set(-0.03, y_max - 0.1);
    end_points[11].Set(0, y_max);


    //punkty dla odcinkow funkcji
    double x, y, step, prev_x, prev_y;

    step = (cfg->Get_x_stop() - cfg->Get_x_start()) / (double)x_step;
    prev_x = cfg->Get_x_start();
    prev_y = GetFunctionValue(prev_x);
    x = prev_x + step;
    for (int i = AXIS_LINES; i < AXIS_LINES + x_step; i++)
    {
        y = GetFunctionValue(x);
        begin_points[i].Set(x, y);
        end_points[i].Set(prev_x, prev_y);
        prev_x = x;
        prev_y = y;
        x = x + step;        
    }
}

Vector ChartClass::Scale_of_Draw(int w, int h)
{
    double scal_x = (w - 20) / (cfg->Get_x1()-cfg->Get_x0());
    double scal_y = (h - 20) / (cfg->Get_y1() - cfg->Get_y0());
    Vector scale;
    scale.Set(scal_x, scal_y);
    return scale;
}


double ChartClass::Get_Y_min()
{
    Set_Range();
    return y_min;
}

double ChartClass::Get_Y_max()
{
    Set_Range();
    return y_max;
}