#include "GUIMyFrame1.h"

GUIMyFrame1::GUIMyFrame1( wxWindow* parent )
:
MyFrame1( parent )
{
	m_ScrollBar_R_alpha->SetScrollbar(0, 1, 360, 1, true);
	cfg = std::make_shared<ConfigClass>(this);
	m_staticText_Ay_min_value->SetLabel(wxString::Format(wxT("%2.4lf"), ChartClass(cfg).Get_Y_min()));
	m_staticText_Ay_max_value->SetLabel(wxString::Format(wxT("%2.4lf"), ChartClass(cfg).Get_Y_max()));
}

void GUIMyFrame1::MainFormClose( wxCloseEvent& event )
{
Destroy();
}

void GUIMyFrame1::WxPanel_Repaint( wxUpdateUIEvent& event )
{
Repaint();
}

void GUIMyFrame1::Edit_FRx0_Update( wxCommandEvent& event )
{
double v;
if (m_Edit_FRx0->GetValue().ToDouble(&v))
{
cfg->Set_x0(v);
Repaint();
}
else wxBell();
}

void GUIMyFrame1::Edit_FRy0_Update( wxCommandEvent& event )
{
double v;
if (m_Edit_FRy0->GetValue().ToDouble(&v))
{
cfg->Set_y0(v);
Repaint();
}
else wxBell();
}

void GUIMyFrame1::Edit_FRx1_Update( wxCommandEvent& event )
{
double v;
if (m_Edit_FRx1->GetValue().ToDouble(&v))
{
cfg->Set_x1(v);
Repaint();
}
else wxBell();
}

void GUIMyFrame1::Edit_FRy1_Update( wxCommandEvent& event )
{
double v;
if (m_Edit_FRy1->GetValue().ToDouble(&v))
{
cfg->Set_y1(v);
Repaint();
}
else wxBell();
}

void GUIMyFrame1::ScrollBar_R_alpha_Update( wxScrollEvent& event )
{
m_StaticText_R_alpha_value->SetLabel(wxString::Format(wxT("%d"), m_ScrollBar_R_alpha->GetThumbPosition()));
cfg->Set_Alpha(m_ScrollBar_R_alpha->GetThumbPosition());
Repaint();
}

void GUIMyFrame1::RadioButton_R_Screen_Click( wxCommandEvent& event )
{
cfg->SetRotateScreen(true);
Repaint();
}

void GUIMyFrame1::RadioButton_R_Graph_Click( wxCommandEvent& event )
{
cfg->SetRotateScreen(false);
Repaint();
}

void GUIMyFrame1::Edit_TdX_Update( wxCommandEvent& event )
{
double v;
if (m_Edit_TdX->GetValue().ToDouble(&v))
{
cfg->Set_dX(v);
Repaint();
}
else wxBell();
}

void GUIMyFrame1::Edit_TdY_Update( wxCommandEvent& event )
{
double v;
if (m_Edit_TdY->GetValue().ToDouble(&v))
{
cfg->Set_dY(v);
Repaint();
}
else wxBell();
}

void GUIMyFrame1::Edit_Ax_start_Update( wxCommandEvent& event )
{
double v;
if (m_Edit_Ax_start->GetValue().ToDouble(&v))
{
cfg->Set_x_start(v);
m_staticText_Ay_min_value->SetLabel(wxString::Format(wxT("%2.4lf"), ChartClass(cfg).Get_Y_min()));
m_staticText_Ay_max_value->SetLabel(wxString::Format(wxT("%2.4lf"), ChartClass(cfg).Get_Y_max()));
Layout();
Repaint();
}
else wxBell();
}

void GUIMyFrame1::Edit_Ax_stop_Update( wxCommandEvent& event )
{
double v;
if (m_Edit_Ax_stop->GetValue().ToDouble(&v))
{
cfg->Set_x_stop(v);
m_staticText_Ay_min_value->SetLabel(wxString::Format(wxT("%2.4lf"), ChartClass(cfg).Get_Y_min()));
m_staticText_Ay_max_value->SetLabel(wxString::Format(wxT("%2.4lf"), ChartClass(cfg).Get_Y_max()));
Layout();
Repaint();
}
else wxBell();
}

void GUIMyFrame1::Choice_Selected_Function( wxCommandEvent& event )
{
cfg->Set_F_type(m_Choice_Function->GetSelection());
}

void GUIMyFrame1::Button_to_FrameRef_click( wxCommandEvent& event )
{
m_Edit_FRx0->SetValue(m_Edit_Ax_start->GetValue());
m_Edit_FRx1->SetValue(m_Edit_Ax_stop->GetValue());
Repaint();
}

void GUIMyFrame1::Button_Load_click( wxCommandEvent& event )
{
wxFileDialog WxOpenFileDialog(this, _("Choose a file"), _(""), _(""), _("config files (*.cfg)|*.cfg"), wxFD_OPEN);
if (WxOpenFileDialog.ShowModal() == wxID_OK) cfg->Load((const_cast<char*>((const char*)WxOpenFileDialog.GetPath().mb_str())));
}

void GUIMyFrame1::Button_Save_click( wxCommandEvent& event )
{
wxFileDialog WxSaveFileDialog(this, _("Choose a file"), _(""), _(""), _("config files (*.cfg)|*.cfg"), wxFD_SAVE);
if (WxSaveFileDialog.ShowModal() == wxID_OK) cfg->Save((const_cast<char*>((const char*)WxSaveFileDialog.GetPath().mb_str())));
}


void GUIMyFrame1::Repaint()
{
	wxClientDC dc1(m_Panel);
	wxBufferedDC dc(&dc1);

	ChartClass MyChart(cfg);
	int w, h;
	m_Panel->GetSize(&w, &h);
	MyChart.Draw(&dc, w, h);
}

GUIMyFrame1::~GUIMyFrame1()
{

}

void GUIMyFrame1::UpdateControls()
{
	m_Edit_FRx0->SetLabel(wxString::Format(wxT("%2.1lf"), cfg->Get_x0()));
	m_Edit_FRx1->SetLabel(wxString::Format(wxT("%2.1lf"), cfg->Get_x1()));
	m_Edit_FRy0->SetLabel(wxString::Format(wxT("%2.1lf"), cfg->Get_y0()));
	m_Edit_FRy1->SetLabel(wxString::Format(wxT("%2.1lf"), cfg->Get_y1()));
	m_Edit_TdX->SetLabel(wxString::Format(wxT("%2.1lf"), cfg->Get_dX()));
	m_Edit_TdY->SetLabel(wxString::Format(wxT("%2.1lf"), cfg->Get_dY()));
	m_Edit_Ax_start->SetLabel(wxString::Format(wxT("%2.1lf"), cfg->Get_x_start()));
	m_Edit_Ax_stop->SetLabel(wxString::Format(wxT("%2.1lf"), cfg->Get_x_stop()));
	m_ScrollBar_R_alpha->SetThumbPosition(int(cfg->Get_Alpha()));
	m_StaticText_R_alpha_value->SetLabel(wxString::Format(wxT("%d"), m_ScrollBar_R_alpha->GetThumbPosition()));
}