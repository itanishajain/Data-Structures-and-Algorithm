#include<iostream>
using namespace std;
int main(){
    int arr[] = {54,87,76,38,93,75};
    int n = sizeof(arr)/sizeof(arr[0]);
    int largest = INT_MIN;
    for(int i=0; i<n; i++){
        if (arr[i] > largest){
            largest = arr[i];
        }
    }
    cout << "Largest number in array is : " << largest<< endl;
    return 0;
}