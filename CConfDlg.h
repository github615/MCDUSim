/////////////////////////////////////////////////////////////////////////////
// Name:        CConfDlg.h
// Purpose:
// Author:      Marcelo Varanda
// Modified by:
// Created:     30/03/2009 13:09:13
// RCS-ID:
// Copyright:   EMS Satcom - All rights reserved.
// Licence:
/////////////////////////////////////////////////////////////////////////////
// @(#) $Id: CConfDlg.h,v 1.4 2012/01/13 18:28:28 macrae.i Exp $

// Generated by DialogBlocks (unregistered), 30/03/2009 13:09:13

#ifndef _CCONFDLG_H_
#define _CCONFDLG_H_


/*!
 * Includes
 */

////@begin includes
#include "wx/xrc/xmlres.h"
////@end includes

/*!
 * Forward declarations
 */

////@begin forward declarations
////@end forward declarations

/*!
 * Control identifiers
 */

////@begin control identifiers
#define ID_CCONFDLG 10000
#define SYMBOL_CCONFDLG_STYLE wxCAPTION|wxRESIZE_BORDER|wxSYSTEM_MENU|wxCLOSE_BOX|wxTAB_TRAVERSAL
#define SYMBOL_CCONFDLG_TITLE _("MCDU SIM Configuration")
#define SYMBOL_CCONFDLG_IDNAME ID_CCONFDLG
#define SYMBOL_CCONFDLG_SIZE wxSize(400, 300)
#define SYMBOL_CCONFDLG_POSITION wxDefaultPosition
////@end control identifiers


/*!
 * CConfDlg class declaration
 */

class CConfDlg: public wxDialog
{
    DECLARE_DYNAMIC_CLASS( CConfDlg )

public:
    /// Constructors
    CConfDlg();
    CConfDlg( wxWindow* parent, wxWindowID id = SYMBOL_CCONFDLG_IDNAME, const wxString& caption = SYMBOL_CCONFDLG_TITLE, const wxPoint& pos = SYMBOL_CCONFDLG_POSITION, const wxSize& size = SYMBOL_CCONFDLG_SIZE, long style = SYMBOL_CCONFDLG_STYLE );

    /// Creation
    bool Create( wxWindow* parent, wxWindowID id = SYMBOL_CCONFDLG_IDNAME, const wxString& caption = SYMBOL_CCONFDLG_TITLE, const wxPoint& pos = SYMBOL_CCONFDLG_POSITION, const wxSize& size = SYMBOL_CCONFDLG_SIZE, long style = SYMBOL_CCONFDLG_STYLE );

    /// Destructor
    ~CConfDlg();

    /// Initialises member variables
    void Init();

    /// Disables or enables combo boxes, depending on connection type
    void EnableOrDisableComboBoxes(long connectionType);

    /// Creates the controls and sizers
    bool CreateControls();

////@begin CConfDlg event handler declarations

////@end CConfDlg event handler declarations

////@begin CConfDlg member function declarations

    /// Retrieves bitmap resources
    wxBitmap GetBitmapResource( const wxString& name );

    /// Retrieves icon resources
    wxIcon GetIconResource( const wxString& name );
////@end CConfDlg member function declarations

    /// Should we show tooltips?
    static bool ShowToolTips();

    void OnButtonCloseClick( wxCommandEvent& event );
    void OnConnectionType( wxCommandEvent& event );
    void OnDimIpAddress( wxCommandEvent& event );
    void OnDimBasePort( wxCommandEvent& event );
    void OnLocalBasePort( wxCommandEvent& event );

	void OnDimInputLabel( wxCommandEvent& event );
	void OnDimOutputLabel( wxCommandEvent& event );

////@begin CConfDlg member variables
    wxButton* m_cmb_here;
    wxComboBox * m_cmb_mcdu;
    wxComboBox * m_cmb_appearance;
    wxComboBox * m_cmb_card;
    wxComboBox * m_cmb_group;
    wxComboBox * m_cmb_parity;
    wxComboBox * m_cmb_tx_speed;
    wxComboBox * m_cmb_rx_speed;
    wxComboBox * m_cmb_tx;
    wxComboBox * m_cmb_rx;
    wxComboBox * m_cmb_connectionType;
    wxComboBox * m_txt_di_host;
    wxTextCtrl * m_dim_ip;
    wxTextCtrl * m_dim_base_port;
    wxTextCtrl * m_local_base_port;
	wxTextCtrl * m_dim_input_label;
	wxTextCtrl * m_dim_output_label;
////@end CConfDlg member variables

    DECLARE_EVENT_TABLE()

};

#endif
    // _CCONFDLG_H_