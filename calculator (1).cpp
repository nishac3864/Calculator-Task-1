#include<bits/stdc++.h>
#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int number;
    int a, b;

    cout << "Operation Menu:" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Substraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;

    cout << "choose a number from menu which task you want to perform: " << endl;
    cin >> number;

    switch(number)
    {
        case 1:
        {
            cout << "give two number to perform the operation: " << endl;
            cin >> a >> b;
            cout << a << "+" << b << "= " <<  a+b << endl;
        }
        break;
        case 2 :
        {
            cout << "give two number to perform the operation: " << endl;
            cin >> a >> b;
            cout << a << "-" << b << "= " <<  a-b << endl;
        }
        break;
        case 3 :
        {
            cout << "give two number to perform the operation: " << endl;
            cin >> a >> b;
            cout << a << "*" << b << "= " <<  a*b << endl;
        }
        break;
        case 4:
        {
            cout << "give two number to perform the operation: " << endl;
            cin >> a >> b;
            cout << a << "/" << b << "= " << a/b << endl;
        }
        break;
        default:
            cout << "Invalid operation." << endl;
            exit(5);
            break;
    }

    getch();
}