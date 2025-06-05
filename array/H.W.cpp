// Find index of the largest and smallest number in an array.

#include<iostream>
using namespace std;
int main(){
    int arr[] = {77,86,13,65,87,34,75,21,58};
    int n = sizeof(arr)/sizeof(arr[0]);
    int smallest = INT_MAX;
    int largest = INT_MIN;
    int min_index = -1, max_index = -1;
    
    for(int i =0; i<n; i++){
        if (arr[i] < smallest){
            smallest = arr[i];
            min_index = i;
        }
        if (arr[i] > largest){
            largest = arr[i];
            max_index = i;
        }
    }
    cout << "Smallest number in array " << smallest << " at index " << min_index << endl;
    cout << "Largest number in array " << largest << " at index " << max_index << endl;

    return 0;
}