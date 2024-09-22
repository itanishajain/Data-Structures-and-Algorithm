#include<iostream>
using namespace std;
int main(){
    int n ;
    cout << "Enter n : ";
    cin >> n;

    int i = 1;
    while(i<=n){
        int space = i-1;
        while(space){
            cout << " " << "\t";
            space = space - 1;
        }
        int j = 1;
        while(j<=n-i+1){
            cout << "*" << "\t";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}