#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter n : ";
    cin >> n;

    int i = 1;
    while(i<=n){
        int j = 1;
        while(j<=i){
            char ch = 'A'+i+j-2;
            cout << ch << "\t";
            j++;
        }
        cout << endl;
        i++;
    } 
    return 0;
}