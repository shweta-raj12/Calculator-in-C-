

//Simple Calculator in C++ by using Switch Case
//user input number and choose Operator

#include<iostream>
using namespace std;

int main()
{
    float a, b;
    char c;
    cout << "Enter the value of A " << endl;
    cin >> a;
    cout << "Enter the value of B" << endl;
    cin >> b;
    cout << "Enter any Operator : +,-,*,/ " << endl;
    cin >> c;

    switch (c)
    {
    case '+':
        cout << a<<"+"<<b<<"="<<a+b << endl;
        break ;

    case '-':
        cout << a<<"-"<<b<<"="<<a-b << endl;
        break ;

    case '*':
        cout << a<<"*"<<b<<"="<<a*b << endl;
        break ;

    case '/':
        cout << a<<"/"<<b<<"="<<a/b << endl;
        break ;
    default :
        cout << "Error Value " << endl;
    }
    return 0;
}