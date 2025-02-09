#include<iostream>
using namespace std;
int main(){
    int arr[] = {34,47,23,54,78,23,34,65};
    int size = 8;
    int count;
    cout << "Unique Element: ";
    for (int i=0; i<8; i++){
        count = 0;
        for(int j=0; j<8; j++){
            if(arr[i] == arr[j]){
                count ++;
            }
        }
        if(count == 1){
            cout << arr[i] << " ";
        }
    }
    cout << endl;
    return 0;
}