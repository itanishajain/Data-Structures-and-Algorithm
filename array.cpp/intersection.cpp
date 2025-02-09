#include<iostream>
using namespace std;
int main(){
    int arr1[] = {2,5,8,1,4};
    int arr2[] = {3,5,7,9,1};
    int size1 = 5, size2 = 5;
    for(int i=0 ; i<5; i++){
        for(int j=0; j<5; j++){
            if(arr1[i] == arr2[j]){
                cout << arr1[i] << " ";
            }
        }
    }
    cout << endl;
    return 0;
}   