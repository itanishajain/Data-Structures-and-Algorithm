#include<iostream>
using namespace std;
int main(){
    char ch;
    cout << "Enter the character : " << endl;
    cin >> ch ;

    if(ch>='a' && ch<='z'){
        cout << "This is an lowercase character. " << endl;
    }
    else if (ch>='A' && ch<='Z')
    {
        cout << "This is an uppercase character. " << endl;
    }
    else if (ch>='0' && ch<='9')
    {
        cout << "This is an numeric. " << endl;
    }
    else {
        cout << "Invalid character." << endl;
    }
    return 0;
}