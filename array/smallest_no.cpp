#include<iostream>
using namespace std;
int main(){
    int arr[] = {54,87,76,38,93,75};
    int n = sizeof(arr)/sizeof(arr[0]);
    int smallest = INT_MAX;
    for(int i=0; i<n; i++){
        if (arr[i] < smallest){
            smallest = arr[i];
        }
    }
    cout << "Smallest number in array is : " << smallest << endl;
    return 0;
}