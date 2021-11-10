#include "MyApp.hpp"

IMPLEMENT_APP(MyApp);

MyApp::MyApp()
{
}

MyApp::~MyApp()
{
}

bool MyApp::OnInit()
{
    this->frame = new MyFrame(wxT("Minimal wxWidget App"));
    frame->Show(true);
    return true;
}
