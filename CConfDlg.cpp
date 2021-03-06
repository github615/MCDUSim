/////////////////////////////////////////////////////////////////////////////
// Name:        CConfDlg.cpp
// Purpose:
// Author:      Marcelo Varanda
// Modified by:
// Created:     30/03/2009 13:09:13
// RCS-ID:
// Copyright:   EMS Satcom - All rights reserved.
// Licence:
/////////////////////////////////////////////////////////////////////////////
// @(#) $Id: CConfDlg.cpp,v 1.12 2012/01/13 18:28:28 macrae.i Exp $

// Generated by DialogBlocks (unregistered), 30/03/2009 13:09:13

#include "wx/setup.h"
#define _WX_SETUP_H_
//#include "msvc/wx/setup.h"      // see if we can slurp in the libraries mentioned in progma comment
// Note: includes the "real" setup.h in ...VS Projects...\mcduSim\lib\vc_lib\mswud\wx\setup.h
//                                 copied from C:\wxWidgets-2.9.1\lib\vc_lib\mswud\wx

// For compilers that support precompilation, includes "wx/wx.h".
#include "wx/wxprec.h"

#ifdef __BORLANDC__
#pragma hdrstop
#endif

#ifndef WX_PRECOMP
#include "wx/wx.h"
#endif

////@begin includes
////@end includes

#include "CConfDlg.h"
#include "config.h"

////@begin XPM images
////@end XPM images


/*!
 * CConfDlg type definition
 */

IMPLEMENT_DYNAMIC_CLASS( CConfDlg, wxDialog )

/*!
 * CConfDlg event table definition
 */

BEGIN_EVENT_TABLE( CConfDlg, wxDialog )

////@begin CConfDlg event table entries
    EVT_BUTTON( XRCID("ID_BUTTON"), CConfDlg::OnButtonCloseClick)
    EVT_CHOICE( XRCID("ID_COMBO_CONNECTION_TYPE"), CConfDlg::OnConnectionType)
    EVT_TEXT( XRCID("ID_EDIT_DIM_IP"), CConfDlg::OnDimIpAddress)
    EVT_TEXT( XRCID("ID_EDIT_DIM_BASE_PORT"), CConfDlg::OnDimBasePort)
    EVT_TEXT( XRCID("ID_EDIT_LOCAL_BASE_PORT"), CConfDlg::OnLocalBasePort)
	EVT_TEXT( XRCID("ID_EDIT_DIM_INPUT_LABEL"), CConfDlg::OnDimInputLabel)
	EVT_TEXT( XRCID("ID_EDIT_DIM_OUTPUT_LABEL"), CConfDlg::OnDimOutputLabel)
////@end CConfDlg event table entries

END_EVENT_TABLE()


/*!
 * CConfDlg constructors
 */

CConfDlg::CConfDlg()
{
    Init();
}

CConfDlg::CConfDlg( wxWindow* parent, wxWindowID id, const wxString& caption, const wxPoint& pos, const wxSize& size, long style )
{
    Init();
    Create(parent, id, caption, pos, size, style);
}


/*!
 * CConfDlg creator
 */

bool CConfDlg::Create( wxWindow* parent, wxWindowID id, const wxString& caption, const wxPoint& pos, const wxSize& size, long style )
{
////@begin CConfDlg creation
    SetExtraStyle(wxWS_EX_BLOCK_EVENTS);
    SetParent(parent);

    if (!CreateControls())
        return false;

    if (GetSizer())
    {
        GetSizer()->SetSizeHints(this);
    }
    Centre();
////@end CConfDlg creation
    return true;
}


/*!
 * CConfDlg destructor
 */

CConfDlg::~CConfDlg()
{
////@begin CConfDlg destruction
////@end CConfDlg destruction
}


/*!
 * Member initialisation
 */
void CConfDlg::Init()
{
////@begin CConfDlg member initialisation
    m_cmb_mcdu           = NULL;
    m_cmb_appearance     = NULL;
    m_cmb_connectionType = NULL;
    m_cmb_card           = NULL;
    m_cmb_group          = NULL;
    m_cmb_parity         = NULL;

    m_cmb_tx             = NULL;
    m_cmb_tx_speed       = NULL;
    m_cmb_rx             = NULL;
    m_cmb_rx_speed       = NULL;

    m_cmb_here           = NULL;
    m_txt_di_host        = NULL;
    m_dim_ip             = NULL;
    m_dim_base_port      = NULL;
    m_local_base_port    = NULL;

	m_dim_input_label    = NULL;
	m_dim_output_label   = NULL;

    //printf("CConfDlg::Init\n");
////@end CConfDlg member initialisation
}


/*
*/

void CConfDlg::EnableOrDisableComboBoxes(long connectionType)
{
    bool want_enable = true;
    if (connectionType > LAST_HARDWARE_CONNECTION_TYPE ||
                        connectionType == CONNECTION_TYPE_UDP)
        want_enable = false;

    m_cmb_card      ->Enable(want_enable);
    m_cmb_group     ->Enable(want_enable);
    m_cmb_parity    ->Enable(want_enable);

    m_cmb_tx        ->Enable(want_enable);
    m_cmb_tx_speed  ->Enable(want_enable);
    m_cmb_rx        ->Enable(want_enable);
    m_cmb_rx_speed  ->Enable(want_enable);

	m_dim_input_label ->Enable(false);
	m_dim_output_label->Enable(false);

}

/*!
 * Control creation for CConfDlg
 */


bool CConfDlg::CreateControls()
{
////@begin CConfDlg content construction
    // Generated by DialogBlocks, 30/03/2009 13:11:07 (unregistered)

//    if (!wxXmlResource::Get()->LoadDialog(this, GetParent(), _T("ID_CONFDLG")))
//        wxLogError(wxT("Missing wxXmlResource::Get()->Load() in OnInit()?"));
    m_cmb_mcdu           = XRCCTRL(*this, "ID_COMBO_MCDU",            wxComboBox);
    m_cmb_appearance     = XRCCTRL(*this, "ID_COMBO_APPEARANCE",      wxComboBox);
    m_cmb_connectionType = XRCCTRL(*this, "ID_COMBO_CONNECTION_TYPE", wxComboBox);
    m_cmb_card           = XRCCTRL(*this, "ID_COMBO_CARD",            wxComboBox);
    m_cmb_group          = XRCCTRL(*this, "ID_COMBO_GROUP",           wxComboBox);
    m_cmb_parity         = XRCCTRL(*this, "ID_COMBO_PARITY",          wxComboBox);

    m_cmb_tx             = XRCCTRL(*this, "ID_COMBO_TX_CHANNEL",      wxComboBox);
    m_cmb_tx_speed       = XRCCTRL(*this, "ID_COMBO_TX_SPEED",        wxComboBox);
    m_cmb_rx             = XRCCTRL(*this, "ID_COMBO_RX_CHANNEL",      wxComboBox);
    m_cmb_rx_speed       = XRCCTRL(*this, "ID_COMBO_RX_SPEED",        wxComboBox);

    m_txt_di_host        = XRCCTRL(*this, "ID_EDIT_DI_HOST",          wxComboBox);

    m_dim_ip             = XRCCTRL(*this, "ID_EDIT_DIM_IP",           wxTextCtrl);
    m_dim_base_port      = XRCCTRL(*this, "ID_EDIT_DIM_BASE_PORT",    wxTextCtrl);
    m_local_base_port    = XRCCTRL(*this, "ID_EDIT_LOCAL_BASE_PORT",  wxTextCtrl);

	m_dim_input_label      = XRCCTRL(*this, "ID_EDIT_DIM_INPUT_LABEL",    wxTextCtrl);
    m_dim_output_label    = XRCCTRL(*this, "ID_EDIT_DIM_OUTPUT_LABEL",  wxTextCtrl);

    m_cmb_here           = XRCCTRL(*this, "ID_BUTTON",                wxButton);

////@end CConfDlg content construction

// make sure every control was created OK
    
                           bool bOK = true;
    if (!m_cmb_mcdu           ) bOK = false;
    if (!m_cmb_appearance     ) bOK = false;
    if (!m_cmb_connectionType ) bOK = false;
    if (!m_cmb_card           ) bOK = false;
    if (!m_cmb_group          ) bOK = false;
    if (!m_cmb_parity         ) bOK = false;
    if (!m_cmb_tx             ) bOK = false;
    if (!m_cmb_tx_speed       ) bOK = false;
    if (!m_cmb_rx             ) bOK = false;
    if (!m_cmb_rx_speed       ) bOK = false;
    if (!m_txt_di_host        ) bOK = false;
    if (!m_dim_ip             ) bOK = false;
    if (!m_dim_base_port      ) bOK = false;
	if (!m_dim_input_label      ) bOK = false;
	if (!m_dim_output_label      ) bOK = false;
    if (!m_local_base_port    ) bOK = false;
    if (!m_cmb_here           ) bOK = false;

    if (!bOK) {
        wxString s;
        // (im) now resources are compiled (see mcduDlgRes.cpp), unlikely to be missing
        s.Printf(wxT("The MCDU Simulator is missing one or more resources!\n\n") );
        //s.Printf(wxT("The MCDU Simulator is missing one or more resources!\n\n") \
        //         wxT("Usually this is a problem with the \"mcduDlgs.xrc\" file,\n") \
        //         wxT("which is either missing, or has been modified so that\n") \
        //         wxT("it no longer has the correct format.\n\n") \
        //         wxT("You will need to find a good version of this file, and\n") \
        //         wxT("place it in the same directory as mcduSim.exe in order\n") \
        //         wxT("to continue.\n") );
        (void)wxMessageBox(s, _T("MCDU Simulator"), wxICON_ERROR|wxOK);
        return false;
    }

    // Create custom windows not generated automatically here.
////@begin CConfDlg content initialisation
////@end CConfDlg content initialisation
    //printf("CConfDlg::CreateControls\n");
    //m_cmb_mcdu->SetValue(wxT("MCDU2"));

    m_cmb_mcdu          ->Select(gConfig.cfgMcdu            - 1 );

    if (gConfig.cfgMcduAppearance>0 && gConfig.cfgMcduAppearance<=LAST_MCDU_APPEARANCE_TYPE)
        m_cmb_appearance->Select(gConfig.cfgMcduAppearance  - 1 );
    else // out of range, use default MCDU appearance
        m_cmb_appearance->Select(DEFAULT_MCDU_APPEARANCE    - 1 );

    if (gConfig.cfgConnectionType>=0 && 
                    gConfig.cfgConnectionType<=LAST_HARDWARE_CONNECTION_TYPE)
        m_cmb_connectionType->Select(gConfig.cfgConnectionType      );
    else // out of range, use simulated pipe
        m_cmb_connectionType->Select(LAST_HARDWARE_CONNECTION_TYPE+1);

    m_cmb_card          ->Select(gConfig.cfgArincCard       - 1 );
    m_cmb_group         ->Select(gConfig.cfgArincGroup      - 1 );
    m_cmb_parity        ->Select(gConfig.cfgArincParity         );

    m_cmb_tx            ->Select(gConfig.cfgArincTxChannel  - 1 );
    m_cmb_tx_speed      ->Select(gConfig.cfgArincTxSpeed        );
    m_cmb_rx            ->Select(gConfig.cfgArincRxChannel  - 1 );

    m_cmb_rx_speed      ->Select(gConfig.cfgArincRxSpeed        );

    EnableOrDisableComboBoxes(gConfig.cfgConnectionType);

    wxString s = wxString::Format(_T("%s"), gConfig.cfgDisplayInterfaceHost);
    if (!m_txt_di_host->SetStringSelection(s)) { // wasn't in list
        m_txt_di_host->AppendString(s);             // so add it
        m_txt_di_host->SetStringSelection(s);       // and select it
    }

    s = wxString::Format(_T("%s"), gConfig.cfgDimIpAddress);
    m_dim_ip->AppendText(s);

    s = wxString::Format(_T("%d"), gConfig.cfgDimBasePort);
    m_dim_base_port->AppendText(s);

    s = wxString::Format(_T("%d"), gConfig.cfgLocalBasePort);
    m_local_base_port->AppendText(s);

    s = wxString::Format(_T("%d"), gConfig.cfgDimInputLabel);
    m_dim_input_label->AppendText(s);

	s = wxString::Format(_T("%d"), gConfig.cfgDimOutputLabel);
    m_dim_output_label->AppendText(s);

    return true;
}

/*
    long cfgMcdu;
    long cfgArincCard;
    long cfgArincTxSpeed;
    long cfgArincGroup;
    long cfgArincParity;
    long cfgArincTxChannel;
    long cfgArincRxChannel;
} config_t;

extern __declspec(align(32)) config_t gConfig;
*/
/*!
 * Should we show tooltips?
 */

bool CConfDlg::ShowToolTips()
{
    return true;
}

/*!
 * Get bitmap resources
 */

wxBitmap CConfDlg::GetBitmapResource( const wxString& name )
{
    // Bitmap retrieval
////@begin CConfDlg bitmap retrieval
    wxUnusedVar(name);
    return wxNullBitmap;
////@end CConfDlg bitmap retrieval
}

/*!
 * Get icon resources
 */

wxIcon CConfDlg::GetIconResource( const wxString& name )
{
    // Icon retrieval
////@begin CConfDlg icon retrieval
    wxUnusedVar(name);
    return wxNullIcon;
////@end CConfDlg icon retrieval
}

void CConfDlg::OnButtonCloseClick( wxCommandEvent& event )
{
////@begin wxEVT_COMMAND_BUTTON_CLICKED event handler for ID_BUTTON in CConfDlg.
    // Before editing this code, remove the block markers.
    //event.Skip();
    gConfig.cfgMcdu             = m_cmb_mcdu            ->GetSelection() + 1;

    gConfig.cfgMcduAppearance   = m_cmb_appearance      ->GetSelection() + 1;
    if (gConfig.cfgMcduAppearance<0 ||
        gConfig.cfgMcduAppearance>LAST_MCDU_APPEARANCE_TYPE) {
        // out of range, use default MCDU appearance
        gConfig.cfgMcduAppearance = DEFAULT_MCDU_APPEARANCE;
    }

    gConfig.cfgConnectionType   = m_cmb_connectionType  ->GetSelection();
    if (gConfig.cfgConnectionType<0 || 
        gConfig.cfgConnectionType>LAST_HARDWARE_CONNECTION_TYPE) {
        // out of hardware range, use simulated pipe
        gConfig.cfgConnectionType = CONNECTION_TYPE_PIPE;
    }

    gConfig.cfgArincCard        = m_cmb_card            ->GetSelection() + 1;
    gConfig.cfgArincGroup       = m_cmb_group           ->GetSelection() + 1;
    gConfig.cfgArincParity      = m_cmb_parity          ->GetSelection();

    gConfig.cfgArincTxChannel   = m_cmb_tx              ->GetSelection() + 1;
    gConfig.cfgArincTxSpeed     = m_cmb_tx_speed        ->GetSelection();
    gConfig.cfgArincRxChannel   = m_cmb_rx              ->GetSelection() + 1;
    gConfig.cfgArincRxSpeed     = m_cmb_rx_speed        ->GetSelection();

    wxString s = m_txt_di_host->GetStringSelection();
    if (s.IsEmpty()) s = wxString::Format(_T("(none)"));
    strcpy_s(gConfig.cfgDisplayInterfaceHost,sizeof(gConfig.cfgDisplayInterfaceHost), (const char *)s);

    Close();
////@end wxEVT_COMMAND_BUTTON_CLICKED event handler for ID_BUTTON in CConfDlg.
}

void CConfDlg::OnConnectionType( wxCommandEvent& event )
{
    int id = XRCID("ID_COMBO_CONNECTION_TYPE");
    int sel = m_cmb_connectionType->GetSelection();
    EnableOrDisableComboBoxes(sel); //0=UDP, 1=DDC, etc

    //event.Skip();
}

void CConfDlg::OnDimIpAddress( wxCommandEvent& event )
{
    wxString data = m_dim_ip->GetValue();
    if (!data.IsEmpty()) {
        strcpy_s(gConfig.cfgDimIpAddress,sizeof(gConfig.cfgDimIpAddress), (const char *)data);
    }
}

void CConfDlg::OnDimBasePort( wxCommandEvent& event )
{
    wxString data = m_dim_base_port->GetValue();
    if (!data.IsEmpty()) {
        gConfig.cfgDimBasePort = atoi((const char *)data);
    }
}

void CConfDlg::OnLocalBasePort( wxCommandEvent& event )
{
    wxString data = m_local_base_port->GetValue();
    if (!data.IsEmpty()) {
        gConfig.cfgLocalBasePort = atoi((const char *)data);
    }
}


void CConfDlg::OnDimInputLabel( wxCommandEvent& event )
{
    wxString data = m_dim_input_label->GetValue();
    if (!data.IsEmpty()) {
        gConfig.cfgDimInputLabel = atoi((const char *)data);
    }
}


void CConfDlg::OnDimOutputLabel( wxCommandEvent& event )
{
    wxString data = m_dim_output_label->GetValue();
    if (!data.IsEmpty()) {
        gConfig.cfgDimOutputLabel = atoi((const char *)data);
    }
}

