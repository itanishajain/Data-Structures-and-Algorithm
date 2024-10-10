#include<iostream>
using namespace std;
void reverseArray(int arr[],int size){
    for(int i=0; i<size/2; i++){
        int temp = arr[i];
        arr[i] = arr[size-i-1];
        arr[size-i-1] = temp;
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
}
int main(){
    int size, key;
    cout << "Enter the size of an array: " ;
    cin >> size;

    int arr[size];
    cout << "Enter the elements of an array: " ;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << endl;
    reverseArray(arr, size);
    return 0;
}