//بسم الله الرحمن الرحيم
//محمد روبيول الإسلام
//roobiul~Githab


#include<iostream>
#include<string>
#include<bits/stdc++.h>
#define ll long long int
#define ctt cout<<
#define Robiul ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
 
using namespace std;
int main() {
    std::ios_base::sync_with_stdio(false);
   
    double num1, num2;
    char op;

              ctt"-------------------\n"
              << "-                 -\n"
              << "-                 -\n"
              << "-------------------\n"
              << "- 1 - 2 - 3 -- + --\n"
              << "-------------------\n"
              << "- 4 - 5 - 6 -- - --\n"
              << "-------------------\n"
              << "- 7 - 8 - 9 -- x --\n"
              << "-------------------\n"
              << "- 0 - / --Ac--ANS--\n"
              << "-------------------\n";

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> num2;

    switch (op) {
     case '+':
        cout << "Result: " << num1 + num2 << '\n';
        break;
     case '-':
        cout << "Result: " << num1 - num2 << '\n';
        break;
     case '*':
        cout << "Result: " << num1 * num2 << '\n';
        break;
     case '/':
        if (num2 != 0)
            cout << "Result: " << num1 / num2 << '\n';
        else
            cout << "Error! Division by zero is not allowed.\n";
        break;
    default:
        cout << "Invalid operator!\n";
    }

    return 0;
}
