#include "MyFrame.hpp"

/* Event Table */
BEGIN_EVENT_TABLE(MyFrame, wxFrame)
 EVT_MENU(wxID_ABOUT, MyFrame::OnAbout)
 EVT_MENU(wxID_EXIT, MyFrame::OnQuit)
 EVT_SIZE(MyFrame::OnSizer)
 EVT_BUTTON(wxID_OK, MyFrame::OnButtonOk)
END_EVENT_TABLE()

MyFrame::MyFrame(const wxString &_title) : wxFrame(NULL, wxID_ANY, _title)
{
    /* Menu */

    wxMenu *fileMenu = new wxMenu;
    wxMenu *helpMenu = new wxMenu;
    helpMenu->Append(wxID_ABOUT, wxT("&About...\tf1"), wxT("Show about dialog"));

    fileMenu->Append(wxID_EXIT, wxT("&Exit\tAlt-X"), wxT("Quit this program"));

    wxMenuBar *menuBar = new wxMenuBar;
    menuBar->Append(fileMenu, wxT("&File"));
    menuBar->Append(helpMenu, wxT("&Help"));


    /* Button */
    wxButton *button = new wxButton(this, wxID_OK, wxT("OK"), wxPoint(10, 10));

    /* Some settings stuff */
    SetMenuBar(menuBar);

    CreateStatusBar(2);
    SetStatusText(wxT("Welcome!"));
}

MyFrame::~MyFrame()
{
}

/* Methods */

void MyFrame::OnQuit(wxCommandEvent &event)
{
    Close();
}

void MyFrame::OnAbout(wxCommandEvent &event)
{
    wxString msg;
    msg.Printf(wxT("Hello and welcome to %s"), wxVERSION_STRING);
    wxMessageBox(msg, wxT("About Minimal"), wxOK | wxICON_INFORMATION, this);
    event.Skip();
}

void MyFrame::OnSizer(wxSizeEvent &event) 
{
    
}

void MyFrame::OnButtonOk(wxCommandEvent &event) 
{
    wxLogMessage("Hello wxWidgets!");
}