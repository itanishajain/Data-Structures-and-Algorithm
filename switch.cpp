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
    


    int totalAmount = 1330;
    int num;
    cout << "Enter the choice of rupee note : (1)-100, (2)-50, (3)-20, (4)-1 : ";
    cin >> num;
    switch (num)
    {
    case 100:
        cout << "No of 100 rupee note to calculate the total amount : 13 \n";
        break;
    case 50:
        cout << "No of 100 rupee note to calculate the total amount : 0 \n";
        break;
    case 20:
        cout << "No of 100 rupee note to calculate the total amount : 1 \n";
        break;
    case 1:
        cout << "No of 100 rupee note to calculate the total amount : 10 \n";
        break;
    default:
        break;
    }
}