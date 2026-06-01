#include<iostream>
using namespace std;
int main(){
    int n ;
    cout << "Enter n : ";
    cin >> n;

    int i = 1;
    while(i<=n){
        int j = 1;
        while(j<=n){
            char ch = 'A';
            cout << ch << "\t";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}