#include<iostream>
using namespace std;
int main(){
    int n, sum = 0 ,i = 1;
    cout << "Enter the number : ";
    cin>>n;

    while (i<=n)
    {
        if (i%2==0)
        {
            sum = sum + i;
        }
        i=i+1;
    }
    cout << "The sum of 1 to n even number is : "<< sum<< endl;
    return 0;
}