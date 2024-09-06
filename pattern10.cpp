#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter n : " ;
    cin >> n;

    char i = 1;
    while (i<=n)
    {
        char j = 1;
        while (j<=n)
        {
            char ch = 'A'+i-1;
            cout << ch;
            j = j+1;
        }
        cout << endl;
        i = i+1;
    }
    
    return 0;
}