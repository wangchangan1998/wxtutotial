#include <wx/wxprec.h>
#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif
#include "simple.hpp"


class Myapp : public wxApp
{
    virtual bool OnInit();
};

//declare the entrance of wxapp
IMPLEMENT_APP(Myapp);

bool Myapp::OnInit() {
    Simple* simple = new Simple(wxT("简单程序"));
    simple->Show();

    return true;
}
