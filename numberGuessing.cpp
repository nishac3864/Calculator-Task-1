#include<bits/stdc++.h>
#include<iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int number;

    int randomNumber = rand() % 1000 + 1;
    cout << "Random Number is: " << randomNumber << endl;

    cout << "enter a number to guess:" << endl;
    cin >> number;

    if((randomNumber - number) < 100 && (randomNumber - number) > 0)
        cout << "You are not too far to guess it" << endl;
    else if((randomNumber - number) < 0)
    {
        if((number - randomNumber) < 100)
             cout << "You are not too far to guess it" << endl;
        else
            cout << "You are too far to guess it" << endl;
    }
    else
        cout << "You are too far to guess it" << endl;

}
