#ifndef __MYFRAME_H__
#define __MYFRAME_H__

#include "MyApp.hpp"

class MyFrame : public wxFrame
{
private:
    /* data */
    DECLARE_EVENT_TABLE()

public:
    MyFrame(const wxString &title);
    virtual ~MyFrame();

    /* Methods */
    void OnQuit(wxCommandEvent &event);
    void OnAbout(wxCommandEvent &event);
    void OnSizer(wxSizeEvent &event);
    void OnButtonOk(wxCommandEvent &event);

};

#endif // __MYFRAME_H__