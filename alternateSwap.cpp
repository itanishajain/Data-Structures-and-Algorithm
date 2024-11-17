#include<iostream>
using namespace std;
int i,temp=0;
void SwapAlternate(int arr[], int size){
    for(i=0;i<size-1;i+=2){
        if(i+1<size){
            //temp = arr[i+1];
            //arr[i+1] = arr[i];
            //arr[i] = temp;
            swap(arr[i],arr[i+1]);
        }
    }
    cout << "Swapped array : " << endl;
    for(i=0;i<size;i++){
        cout << arr[i] << "\t";
    }
    cout << "\n";
}
int main(){
    int n,i;
    cout << "Enter the size of a array: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements of array: ";
    for(i=0;i<n;i++){
        cin >> arr[i];
    }
    SwapAlternate(arr,n);
    return 0;
}