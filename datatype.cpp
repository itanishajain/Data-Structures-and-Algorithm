#include<iostream>
using namespace std;
int main(){
    int a = 23;
    cout << a << endl;

    char c = 'T';
    cout << c << endl;

    double d = 23.54;
    cout << d << endl;

    bool b = false;
    cout << b << endl;

    int size = sizeof(b);
    cout << "Size of b is : " << size << endl;
    return 0;
}