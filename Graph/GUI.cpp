///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 4.1.0-0-g733bf3d)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "GUI.h"

///////////////////////////////////////////////////////////////////////////

MyFrame1::MyFrame1( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( 600,400 ), wxDefaultSize );

	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxHORIZONTAL );

	m_Panel = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	m_Panel->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNHIGHLIGHT ) );

	bSizer1->Add( m_Panel, 1, wxEXPAND | wxALL, 5 );

	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxVERTICAL );

	m_staticText_FramRef = new wxStaticText( this, wxID_ANY, _("Układ Świata"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_FramRef->Wrap( -1 );
	bSizer2->Add( m_staticText_FramRef, 0, wxALIGN_CENTER|wxALL, 5 );

	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText_FRx0 = new wxStaticText( this, wxID_ANY, _("x0:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_FRx0->Wrap( -1 );
	bSizer3->Add( m_staticText_FRx0, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	m_Edit_FRx0 = new wxTextCtrl( this, wxID_ANY, _("-1.0"), wxDefaultPosition, wxSize( 50,-1 ), 0 );
	bSizer3->Add( m_Edit_FRx0, 0, wxALL, 5 );

	m_staticText_FRy0 = new wxStaticText( this, wxID_ANY, _("y0:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_FRy0->Wrap( -1 );
	bSizer3->Add( m_staticText_FRy0, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	m_Edit_FRy0 = new wxTextCtrl( this, wxID_ANY, _("-2.0"), wxDefaultPosition, wxSize( 50,-1 ), 0 );
	bSizer3->Add( m_Edit_FRy0, 0, wxALL, 5 );


	bSizer2->Add( bSizer3, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText_FRx1 = new wxStaticText( this, wxID_ANY, _("x1:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_FRx1->Wrap( -1 );
	bSizer4->Add( m_staticText_FRx1, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	m_Edit_FRx1 = new wxTextCtrl( this, wxID_ANY, _("1.0"), wxDefaultPosition, wxSize( 50,-1 ), 0 );
	bSizer4->Add( m_Edit_FRx1, 0, wxALL, 5 );

	m_staticText_FRy1 = new wxStaticText( this, wxID_ANY, _("y1:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_FRy1->Wrap( -1 );
	bSizer4->Add( m_staticText_FRy1, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	m_Edit_FRy1 = new wxTextCtrl( this, wxID_ANY, _("2.0"), wxDefaultPosition, wxSize( 50,-1 ), 0 );
	bSizer4->Add( m_Edit_FRy1, 0, wxALL, 5 );


	bSizer2->Add( bSizer4, 1, wxEXPAND, 5 );

	m_staticText_Rotation = new wxStaticText( this, wxID_ANY, _("Obrót"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_Rotation->Wrap( -1 );
	bSizer2->Add( m_staticText_Rotation, 0, wxALIGN_CENTER|wxALL, 5 );

	wxBoxSizer* bSizer5;
	bSizer5 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText_R_alfa = new wxStaticText( this, wxID_ANY, _("Alpha:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_R_alfa->Wrap( -1 );
	bSizer5->Add( m_staticText_R_alfa, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	m_ScrollBar_R_alpha = new wxScrollBar( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxSB_HORIZONTAL );
	bSizer5->Add( m_ScrollBar_R_alpha, 1, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	m_StaticText_R_alpha_value = new wxStaticText( this, wxID_ANY, _("0"), wxDefaultPosition, wxDefaultSize, 0 );
	m_StaticText_R_alpha_value->Wrap( -1 );
	m_StaticText_R_alpha_value->SetMinSize( wxSize( 23,-1 ) );

	bSizer5->Add( m_StaticText_R_alpha_value, 0, wxALIGN_CENTER, 5 );


	bSizer2->Add( bSizer5, 1, wxEXPAND, 5 );

	m_RadioButton_R_Screen = new wxRadioButton( this, wxID_ANY, _("Środek ekranu"), wxDefaultPosition, wxDefaultSize, 0 );
	m_RadioButton_R_Screen->SetValue( true );
	bSizer2->Add( m_RadioButton_R_Screen, 0, wxALIGN_CENTER|wxALL, 5 );

	m_RadioButton_R_Graph = new wxRadioButton( this, wxID_ANY, _("Środek układu"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer2->Add( m_RadioButton_R_Graph, 0, wxALIGN_CENTER|wxALL, 5 );

	m_staticText_Translation = new wxStaticText( this, wxID_ANY, _("Translacja o wektor"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_Translation->Wrap( -1 );
	bSizer2->Add( m_staticText_Translation, 0, wxALIGN_CENTER|wxALL, 5 );

	wxBoxSizer* bSizer6;
	bSizer6 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText_TdX = new wxStaticText( this, wxID_ANY, _("dX"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_TdX->Wrap( -1 );
	bSizer6->Add( m_staticText_TdX, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	m_Edit_TdX = new wxTextCtrl( this, wxID_ANY, _("0.0"), wxDefaultPosition, wxSize( 50,-1 ), 0 );
	bSizer6->Add( m_Edit_TdX, 0, wxALL, 5 );

	m_staticText_TdY = new wxStaticText( this, wxID_ANY, _("dY"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_TdY->Wrap( -1 );
	bSizer6->Add( m_staticText_TdY, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	m_Edit_TdY = new wxTextCtrl( this, wxID_ANY, _("0.0"), wxDefaultPosition, wxSize( 50,-1 ), 0 );
	bSizer6->Add( m_Edit_TdY, 0, wxALL, 5 );


	bSizer2->Add( bSizer6, 1, wxEXPAND, 5 );

	m_staticText_Axis = new wxStaticText( this, wxID_ANY, _("Wartości na wykresie:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_Axis->Wrap( -1 );
	bSizer2->Add( m_staticText_Axis, 0, wxALIGN_CENTER|wxALL, 5 );

	wxBoxSizer* bSizer7;
	bSizer7 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText_Ax_start = new wxStaticText( this, wxID_ANY, _("x_start"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_Ax_start->Wrap( -1 );
	bSizer7->Add( m_staticText_Ax_start, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	m_Edit_Ax_start = new wxTextCtrl( this, wxID_ANY, _("-1.0"), wxDefaultPosition, wxSize( 50,-1 ), 0 );
	bSizer7->Add( m_Edit_Ax_start, 0, wxALL, 5 );

	m_staticText_Ax_stop = new wxStaticText( this, wxID_ANY, _("x_stop"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_Ax_stop->Wrap( -1 );
	bSizer7->Add( m_staticText_Ax_stop, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	m_Edit_Ax_stop = new wxTextCtrl( this, wxID_ANY, _("2.0"), wxDefaultPosition, wxSize( 50,-1 ), 0 );
	bSizer7->Add( m_Edit_Ax_stop, 0, wxALL, 5 );


	bSizer2->Add( bSizer7, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer8;
	bSizer8 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText_Ay_min = new wxStaticText( this, wxID_ANY, _("y_min:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_Ay_min->Wrap( -1 );
	bSizer8->Add( m_staticText_Ay_min, 0, wxALIGN_CENTER|wxALL, 5 );

	m_staticText_Ay_min_value = new wxStaticText( this, wxID_ANY, _("?"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_Ay_min_value->Wrap( -1 );
	bSizer8->Add( m_staticText_Ay_min_value, 0, wxALIGN_CENTER|wxALL, 5 );

	m_staticText_Ay_max = new wxStaticText( this, wxID_ANY, _("y_max:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_Ay_max->Wrap( -1 );
	bSizer8->Add( m_staticText_Ay_max, 0, wxALIGN_CENTER|wxALL, 5 );

	m_staticText_Ay_max_value = new wxStaticText( this, wxID_ANY, _("?"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_Ay_max_value->Wrap( -1 );
	bSizer8->Add( m_staticText_Ay_max_value, 0, wxALIGN_CENTER|wxALL, 5 );


	bSizer2->Add( bSizer8, 1, wxALIGN_CENTER|wxALL, 5 );

	wxString m_Choice_FunctionChoices[] = { _("x+sin(4x)"), _("x^2"), _("0.5*e^(4x-3x^2)") };
	int m_Choice_FunctionNChoices = sizeof( m_Choice_FunctionChoices ) / sizeof( wxString );
	m_Choice_Function = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_Choice_FunctionNChoices, m_Choice_FunctionChoices, 0 );
	m_Choice_Function->SetSelection( 0 );
	bSizer2->Add( m_Choice_Function, 0, wxALIGN_CENTER|wxALL, 5 );

	m_button_to_FrameRef = new wxButton( this, wxID_ANY, _("Do ukladu swiata"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer2->Add( m_button_to_FrameRef, 0, wxALIGN_CENTER|wxALL, 5 );

	wxBoxSizer* bSizer9;
	bSizer9 = new wxBoxSizer( wxHORIZONTAL );

	m_button_Load = new wxButton( this, wxID_ANY, _("Wczytaj"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer9->Add( m_button_Load, 0, wxALL, 5 );

	m_button_Save = new wxButton( this, wxID_ANY, _("Zapisz"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer9->Add( m_button_Save, 0, wxALL, 5 );


	bSizer2->Add( bSizer9, 1, wxALIGN_CENTER|wxALL, 5 );


	bSizer1->Add( bSizer2, 0, wxALIGN_CENTER|wxALL, 5 );


	this->SetSizer( bSizer1 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( MyFrame1::MainFormClose ) );
	m_Panel->Connect( wxEVT_UPDATE_UI, wxUpdateUIEventHandler( MyFrame1::WxPanel_Repaint ), NULL, this );
	m_Edit_FRx0->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Edit_FRx0_Update ), NULL, this );
	m_Edit_FRy0->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Edit_FRy0_Update ), NULL, this );
	m_Edit_FRx1->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Edit_FRx1_Update ), NULL, this );
	m_Edit_FRy1->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Edit_FRy1_Update ), NULL, this );
	m_ScrollBar_R_alpha->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::ScrollBar_R_alpha_Update ), NULL, this );
	m_ScrollBar_R_alpha->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::ScrollBar_R_alpha_Update ), NULL, this );
	m_ScrollBar_R_alpha->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::ScrollBar_R_alpha_Update ), NULL, this );
	m_ScrollBar_R_alpha->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::ScrollBar_R_alpha_Update ), NULL, this );
	m_ScrollBar_R_alpha->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::ScrollBar_R_alpha_Update ), NULL, this );
	m_ScrollBar_R_alpha->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::ScrollBar_R_alpha_Update ), NULL, this );
	m_ScrollBar_R_alpha->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::ScrollBar_R_alpha_Update ), NULL, this );
	m_ScrollBar_R_alpha->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::ScrollBar_R_alpha_Update ), NULL, this );
	m_ScrollBar_R_alpha->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::ScrollBar_R_alpha_Update ), NULL, this );
	m_RadioButton_R_Screen->Connect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( MyFrame1::RadioButton_R_Screen_Click ), NULL, this );
	m_RadioButton_R_Graph->Connect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( MyFrame1::RadioButton_R_Graph_Click ), NULL, this );
	m_Edit_TdX->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Edit_TdX_Update ), NULL, this );
	m_Edit_TdY->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Edit_TdY_Update ), NULL, this );
	m_Edit_Ax_start->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Edit_Ax_start_Update ), NULL, this );
	m_Edit_Ax_stop->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Edit_Ax_stop_Update ), NULL, this );
	m_Choice_Function->Connect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( MyFrame1::Choice_Selected_Function ), NULL, this );
	m_button_to_FrameRef->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame1::Button_to_FrameRef_click ), NULL, this );
	m_button_Load->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame1::Button_Load_click ), NULL, this );
	m_button_Save->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame1::Button_Save_click ), NULL, this );
}

MyFrame1::~MyFrame1()
{
	// Disconnect Events
	this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( MyFrame1::MainFormClose ) );
	m_Panel->Disconnect( wxEVT_UPDATE_UI, wxUpdateUIEventHandler( MyFrame1::WxPanel_Repaint ), NULL, this );
	m_Edit_FRx0->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Edit_FRx0_Update ), NULL, this );
	m_Edit_FRy0->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Edit_FRy0_Update ), NULL, this );
	m_Edit_FRx1->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Edit_FRx1_Update ), NULL, this );
	m_Edit_FRy1->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Edit_FRy1_Update ), NULL, this );
	m_ScrollBar_R_alpha->Disconnect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::ScrollBar_R_alpha_Update ), NULL, this );
	m_ScrollBar_R_alpha->Disconnect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::ScrollBar_R_alpha_Update ), NULL, this );
	m_ScrollBar_R_alpha->Disconnect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::ScrollBar_R_alpha_Update ), NULL, this );
	m_ScrollBar_R_alpha->Disconnect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::ScrollBar_R_alpha_Update ), NULL, this );
	m_ScrollBar_R_alpha->Disconnect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::ScrollBar_R_alpha_Update ), NULL, this );
	m_ScrollBar_R_alpha->Disconnect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::ScrollBar_R_alpha_Update ), NULL, this );
	m_ScrollBar_R_alpha->Disconnect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::ScrollBar_R_alpha_Update ), NULL, this );
	m_ScrollBar_R_alpha->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::ScrollBar_R_alpha_Update ), NULL, this );
	m_ScrollBar_R_alpha->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::ScrollBar_R_alpha_Update ), NULL, this );
	m_RadioButton_R_Screen->Disconnect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( MyFrame1::RadioButton_R_Screen_Click ), NULL, this );
	m_RadioButton_R_Graph->Disconnect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( MyFrame1::RadioButton_R_Graph_Click ), NULL, this );
	m_Edit_TdX->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Edit_TdX_Update ), NULL, this );
	m_Edit_TdY->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Edit_TdY_Update ), NULL, this );
	m_Edit_Ax_start->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Edit_Ax_start_Update ), NULL, this );
	m_Edit_Ax_stop->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Edit_Ax_stop_Update ), NULL, this );
	m_Choice_Function->Disconnect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( MyFrame1::Choice_Selected_Function ), NULL, this );
	m_button_to_FrameRef->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame1::Button_to_FrameRef_click ), NULL, this );
	m_button_Load->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame1::Button_Load_click ), NULL, this );
	m_button_Save->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame1::Button_Save_click ), NULL, this );

}
