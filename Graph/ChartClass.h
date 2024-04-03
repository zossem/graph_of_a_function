#ifndef __ChartClass__
#define __ChartClass__

#include <memory>
#include "ConfigClass.h"
#include <vector>
#include "vecmat.h"
class Matrix;
class ConfigClass;

#define AXIS_LINES 12

class ChartClass
{
    private:
        std::shared_ptr<ConfigClass> cfg;
        int x_step;         // liczba odcinkow z jakich bedzie sie skladal wykres
        double x_min,x_max; // zakres zmiennej x
        double y_min,y_max; // zakres wartosci przyjmowanych przez funkcje

        std::vector<Vector> begin_points;
        std::vector<Vector> end_points;

        double GetFunctionValue(double x); // zwraca wartosci rysowanej funkcji
        
        void line2d(Matrix t, Vector &begin_line, Vector &end_line );
        // powyzej sugerowana funkcja transformujaca odcinki (jesli ktos ma 
        // inny pomysl mozna ja usunac)
       
    public:
        ChartClass(std::shared_ptr<ConfigClass> c);
        void Set_Range();   // ustala wartosci zmiennych x_min,y_min,x_max,y_max
        double Get_Y_min(); // zwraca y_min
        double Get_Y_max(); // zwraca y_max
        void Draw(wxDC *dc, int w, int h);  // rysuje wykres
        void SetPoints();
        Vector Scale_of_Draw(int w, int h);
};

#endif
