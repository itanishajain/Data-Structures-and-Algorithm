#include<iostream>
using namespace std;
int main(){
    int a, b;
    char op;
    cout << "Enter the first number: " ;
    cin >> a;

    cout << "Enter the second number: ";
    cin >> b;

    cout << "Enter the operator: " ;
    cin >> op;

    switch (op)
    {
    case '+':
        cout << (a+b) << endl;
        break;
    
    case '-': 
        cout << (a-b) << endl;
        break;
    case '*': 
        cout << (a*b) << endl;
        break;
    case '/': 
        cout << (a/b) << endl;
        break;
    default:
        break;
    }
    return 0;
}