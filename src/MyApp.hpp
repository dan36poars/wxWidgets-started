#ifndef __MYAPP_H__
#define __MYAPP_H__

#include <wx/wx.h>
#include "MyFrame.hpp"

class MyApp : public wxApp
{
private:
    /* data */
    wxFrame *frame = nullptr;

public:
    MyApp();
    virtual ~MyApp();
    virtual bool OnInit() wxOVERRIDE;
};

DECLARE_APP(MyApp)

#endif // __MYAPP_H__