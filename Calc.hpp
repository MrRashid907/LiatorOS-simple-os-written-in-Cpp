/* 
  Calculator for Liator v0.1
  it Functions:
  addition, subtraction, multiplication, division, Square , Squaroot
 */

#include <iostream>
#include <math.h>

using namespace std;

char menu()
{
  system("cls");
  char op;
  cout << "     Calculator v1.0" << endl;
  cout << " Enter..." << endl;
  cout << "| + |for Addition" << endl;
  cout << "| - |for Subtraction" << endl;
  cout << "| x |for Multiplication" << endl;
  cout << "| / |for Division" << endl;
  cout << "| * |for Square" << endl;
  cout << "| | |for Square Root" << endl;
  cout << "| e |for Exit" << endl;
  cout << "Enter your Choice :";
  cin >> op;
  return (op);
}

void calc()
{
  double a, b;
  while (true)
  {
    switch (menu())
    {
    case '+':
      cout << "Enter the first number :";
      cin >> a;
      cout << "Enter the second number:";
      cin >> b;
      cout << "Result :" << (a + b)<<endl;
      system("pause");
      break;

    case '-':
      cout << "Enter the first number :";
      cin >> a;
      cout << "Enter the second number:";
      cin >> b;
      cout << "Result :" << (a - b)<<endl;
      system("pause");
      break;

    case 'x':
      cout << "Enter the first number :";
      cin >> a;
      cout << "Enter the second number:";
      cin >> b;
      cout << "Result :" << (a * b)<<endl;
      system("pause");
      break;

    case '/':
      cout << "Enter the first number :";
      cin >> a;
      cout << "Enter the second number:";
      cin >> b;
      cout << "Result :" << (a / b)<<endl;
      system("pause");
      break;

    case '*':
      cout << "Enter the number :";
      cin >> a;
      cout << "Result :" << (a * a)<<endl;
      system("pause");
      break;

    case '|':
      cout << "Enter the number number :";
      cin >> a;
      cout << "Result :" << sqrt(a)<<endl;
      system("pause");
      break;

    case 'e':
    case 'E':
      return;

    default:
      calc();
      break;
    }
  }
}