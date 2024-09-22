#include<iostream>
using namespace std;
int main(){
    int n ;
    cout << "Enter n : ";
    cin >> n;
    int i = 1;
    while(i<=n){
        int j = 1;
        while(j<=n-i+1){
            cout << j << "\t";
            j++;
        }
        int star = i-1;
        while(star){
            cout << "*" << "\t";
            star --; 
        }
        int k = 1;
        while(k<=i-1){
            cout << "*" << "\t";
            k++;
        }
        int h = n-i+1;
        while(h>=1){
            cout << h << "\t";
            h--;
        }
        cout << endl;
        i++;
    }
    return 0;
}