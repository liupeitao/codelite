//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// wxCrafter project file: VIM.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#include "VIM.h"


// Declare the bitmap loading function
extern void wxCAF3BInitBitmapResources();

static bool bBitmapLoaded = false;


VimSettingsDlgBase::VimSettingsDlgBase(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style)
    : wxDialog(parent, id, title, pos, size, style)
{
    if ( !bBitmapLoaded ) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxCAF3BInitBitmapResources();
        bBitmapLoaded = true;
    }
    
    wxBoxSizer* boxSizer2 = new wxBoxSizer(wxVERTICAL);
    this->SetSizer(boxSizer2);
    
    wxFlexGridSizer* flexGridSizer14 = new wxFlexGridSizer(0, 2, 0, 0);
    flexGridSizer14->SetFlexibleDirection( wxBOTH );
    flexGridSizer14->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
    
    boxSizer2->Add(flexGridSizer14, 1, wxALL|wxEXPAND, WXC_FROM_DIP(5));
    
    m_checkBoxEnabled = new wxCheckBox(this, wxID_ANY, _("Enable vim mode"), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1,-1)), 0);
    m_checkBoxEnabled->SetValue(false);
    
    flexGridSizer14->Add(m_checkBoxEnabled, 0, wxALL, WXC_FROM_DIP(5));
    
    m_stdBtnSizer4 = new wxStdDialogButtonSizer();
    
    boxSizer2->Add(m_stdBtnSizer4, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, WXC_FROM_DIP(10));
    
    m_button10 = new wxButton(this, wxID_OK, wxT(""), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), 0);
    m_button10->SetDefault();
    m_stdBtnSizer4->AddButton(m_button10);
    
    m_button12 = new wxButton(this, wxID_CANCEL, wxT(""), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), 0);
    m_stdBtnSizer4->AddButton(m_button12);
    m_stdBtnSizer4->Realize();
    
    SetName(wxT("VimSettingsDlgBase"));
    SetSize(-1,-1);
    if (GetSizer()) {
         GetSizer()->Fit(this);
    }
    if(GetParent()) {
        CentreOnParent(wxBOTH);
    } else {
        CentreOnScreen(wxBOTH);
    }
#if wxVERSION_NUMBER >= 2900
    if(!wxPersistenceManager::Get().Find(this)) {
        wxPersistenceManager::Get().RegisterAndRestore(this);
    } else {
        wxPersistenceManager::Get().Restore(this);
    }
#endif
}

VimSettingsDlgBase::~VimSettingsDlgBase()
{
}