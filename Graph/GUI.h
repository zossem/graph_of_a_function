///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 4.1.0-0-g733bf3d)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/intl.h>
#include <wx/panel.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/valtext.h>
#include <wx/sizer.h>
#include <wx/scrolbar.h>
#include <wx/radiobut.h>
#include <wx/choice.h>
#include <wx/button.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/frame.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class MyFrame1
///////////////////////////////////////////////////////////////////////////////
class MyFrame1 : public wxFrame
{
	private:

	protected:
		wxStaticText* m_staticText_FRx0;
		wxTextCtrl* m_Edit_FRx0;
		wxStaticText* m_staticText_FRy0;
		wxTextCtrl* m_Edit_FRy0;
		wxStaticText* m_staticText_FRx1;
		wxTextCtrl* m_Edit_FRx1;
		wxStaticText* m_staticText_FRy1;
		wxTextCtrl* m_Edit_FRy1;
		wxStaticText* m_staticText_Rotation;
		wxStaticText* m_staticText_R_alfa;
		wxScrollBar* m_ScrollBar_R_alpha;
		wxRadioButton* m_RadioButton_R_Screen;
		wxRadioButton* m_RadioButton_R_Graph;
		wxStaticText* m_staticText_Translation;
		wxStaticText* m_staticText_TdX;
		wxTextCtrl* m_Edit_TdX;
		wxStaticText* m_staticText_TdY;
		wxTextCtrl* m_Edit_TdY;
		wxStaticText* m_staticText_Ax_start;
		wxTextCtrl* m_Edit_Ax_start;
		wxStaticText* m_staticText_Ax_stop;
		wxTextCtrl* m_Edit_Ax_stop;
		wxStaticText* m_staticText_Ay_min;
		wxStaticText* m_staticText_Ay_min_value;
		wxStaticText* m_staticText_Ay_max;
		wxStaticText* m_staticText_Ay_max_value;
		wxChoice* m_Choice_Function;
		wxButton* m_button_to_FrameRef;
		wxButton* m_button_Load;
		wxButton* m_button_Save;

		// Virtual event handlers, override them in your derived class
		virtual void MainFormClose( wxCloseEvent& event ) { event.Skip(); }
		virtual void WxPanel_Repaint( wxUpdateUIEvent& event ) { event.Skip(); }
		virtual void Edit_FRx0_Update( wxCommandEvent& event ) { event.Skip(); }
		virtual void Edit_FRy0_Update( wxCommandEvent& event ) { event.Skip(); }
		virtual void Edit_FRx1_Update( wxCommandEvent& event ) { event.Skip(); }
		virtual void Edit_FRy1_Update( wxCommandEvent& event ) { event.Skip(); }
		virtual void ScrollBar_R_alpha_Update( wxScrollEvent& event ) { event.Skip(); }
		virtual void RadioButton_R_Screen_Click( wxCommandEvent& event ) { event.Skip(); }
		virtual void RadioButton_R_Graph_Click( wxCommandEvent& event ) { event.Skip(); }
		virtual void Edit_TdX_Update( wxCommandEvent& event ) { event.Skip(); }
		virtual void Edit_TdY_Update( wxCommandEvent& event ) { event.Skip(); }
		virtual void Edit_Ax_start_Update( wxCommandEvent& event ) { event.Skip(); }
		virtual void Edit_Ax_stop_Update( wxCommandEvent& event ) { event.Skip(); }
		virtual void Choice_Selected_Function( wxCommandEvent& event ) { event.Skip(); }
		virtual void Button_to_FrameRef_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void Button_Load_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void Button_Save_click( wxCommandEvent& event ) { event.Skip(); }


	public:
		wxPanel* m_Panel;
		wxStaticText* m_staticText_FramRef;
		wxStaticText* m_StaticText_R_alpha_value;
		wxStaticText* m_staticText_Axis;

		MyFrame1( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("GFK Lab 03"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 777,510 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~MyFrame1();

};

