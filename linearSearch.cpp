#include<iostream>
using namespace std;

int linearSearch(int ar[], int size, int ele){
    for(int i=0; i<size; i++){
        if(ar[i]==ele){
            return i;
        }
    }
    return 0;
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

    cout << "Element to be found: ";
    cin >> key;
    
    int index = linearSearch(arr, size, key);
    if(index >= 0){
        cout << "Element is found a index : " << index << endl;
    }
    else{
        cout << "Element is not found." << endl;
    }
    return 0;
}