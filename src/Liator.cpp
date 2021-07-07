
/* 
    ======================================
    Liator (C)  2021-2022
    Version : 0.1
    Written by : Rashid Khan
    Goal : The goal is to create a fully functioning Disk Operating System
    This is just a prototype of it
    this version can run on top of OS
    but the main version can run it on own 
    ======================================
    Main version will come in 2023
    
    With:
        Bootloader
        Kernel
        Drivers
        File System
        and many more

    
 */

#include <bits/stdc++.h>
#include "include/Calc.hpp"
#include "include/file.hpp"
#include "include/tictaktoe.hpp"
#include "include/guess.hpp"

using namespace std;

void about()
{
    cout << "Name   : Liator-DOS" << endl;
    cout << "Version: 0.1" << endl;
    cout << "Arch   : 16-bit" << endl;
}
void dt()
{
    time_t t = time(0);
    tm *now = localtime(&t);
    cout << "Date: " << (now->tm_mday) << "/" << (now->tm_mon + 1) << "/" << (now->tm_year + 1900) << "\n";
    if ((now->tm_hour) > 12)
    {
        cout << "Time :" << (now->tm_hour - 12) << ":" << (now->tm_min) << " pm";
        return;
    }
    cout << "Time :" << (now->tm_hour) << ":" << (now->tm_min) << " am";
}
void intro()
{
    cout << "Welcome to Liator v0.1" << endl;
    cout << "type your command or type help !!" << endl;
    dt();
    cout << endl;
}

void help()
{
    cout << "           User Guide!!" << endl;
    cout << "   type>>" << endl;
    cout << "   calc  : Calculator" << endl;
    cout << "   Npad  : Notepad" << endl;
    cout << "   rboot : Restart" << endl;
    cout << "   cls   : Clear screen" << endl;
    cout << "   about : About Liator" << endl;
    cout << "   dt    : Date & Time" << endl;
    cout << "   ttoe  : Tik tak toe" << endl;
    cout << "   gg    : No. Guessing " << endl;
    cout << "   sdown : Shutdown" << endl;
}

int main()
{
    string com;
    system("cls");
    intro();
    while (true)
    {
        cout << endl
             << endl;
        cout << "[A]:";
        cin >> com;
        transform(com.begin(), com.end(), com.begin(), ::tolower);
        if (com == "help")
        {
            help();
        }
        else if (com == "npad")
        {
            notepad();
        }
        else if (com == "ttoe")
        {
            tiktaktoe();
        }
        else if (com == "gg")
        {
            guess();
        }
        else if (com == "calc")
        {
            calc();
        }

        else if (com == "sdown")
        {
            exit(0);
        }
        else if (com == "cls")
        {
            system("cls");
        }
        else if (com == "rstart")
        {
            main();
        }
        else if (com == "about")
        {
            about();
        }
        else if (com == "dt")
        {
            dt();
        }

        else
        {
            cout << "command not found!!!";
        }
    }
}