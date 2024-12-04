#include<iostream>
using namespace std;
int main(){
    int n ;
    cout << "Enter n : ";
    cin >> n;

    int i = 1;
    while(i<=n){
        int space = n-i;
        while(space){
            cout << " " << "\t";
            space = space - 1;
        }
        int j = 1;
        while(j<=i){
            cout << "*" << "\t";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}