/*
 * Header file for Notepad v0.1
 */

#include <bits/stdc++.h>

using namespace std;

void write()
{
    fstream file;
    string name, text;
    cout << "Enter the name of file :";
    cin >> name;
    file.open(name, ios::app);
    cout << endl
         << "Enter text to file (enter -1 to exit) :";
    while (true)
    {
        getline(cin, text);

        if (text == "-1")
        {
            exit(0);
        }
        file << text << endl;
    }
    file.close();
    return;
}

void read()
{
    fstream file;
    string text, name;
    cout << "Enter the name of file :";
    cin>>name;
    file.open(name);
    while (file)
    {
        getline(file, text);

        cout << text;
    }
    file.close();
    return;
}

int choice()
{
    system("cls");
    int op;
    cout << "     Notepad!! v0.1 " << endl<<endl;
    cout << "1. Write" << endl;
    cout << "2. Read" << endl;
    cout << "3. Exit" << endl;
    cout << "Choice:";
    cin >> op;
    return(op);
}

void notepad()
{
    while (true)
    {
        switch (choice())
        {
        case 1:
            write();
            break;

        case 2:
            read();
            break;

        case 3:
            return;

        default:
            notepad();
        }
    }
    
}
