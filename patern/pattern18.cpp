#include<iostream>
using namespace std;
int main(){
    int n ;
    cout << "Enter n : " ;
    cin >> n ;
    char constant = 'A';
    int i = 1;
    while (i<=n)

    {   int j = 1;
        while(j<=i){
          char ch = 'A'+n-i+j-1;
          cout<<ch;
          j=j+1;
        
        }
        cout<<endl;
        i=i+1;

    }
    
    return 0;
}