#include<iostream>
using namespace std;

int getMax(int num[], int size){
    int max = INT_MIN;
    for(int i=0; i<size; i++){
        if(num[i] > max){
            max = num[i];
        }
    }
    return max;
}

int getMin(int num[], int size){
    int min = INT_MAX;
    for(int i=0; i<size; i++){
        if(num[i] < min){
            min = num[i];
        }
    }
    return min;
}

int main(){
    int size;
    cout << "Enter the size of array: " ;
    cin >> size;

    int arr[size];
    cout << "Elements of array: ";

    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i] ;
    }
    cout << "The minimum number in the array is: " << getMin(arr,size) << endl;
    cout << "The maximum number in the array is: " << getMax(arr,size) << endl;

    return 0;
}