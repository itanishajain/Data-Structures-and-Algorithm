#include<iostream>
using namespace std;
pair<int , int> linearSearch(int arr[][3], int rows, int columns, int key){
    for(int i=0; i<rows; i++){
        for(int j=0; j<columns; j++){
            if(arr[i][j] == key){
                return make_pair(i, j);
            }
        }
    }
    return make_pair(-1, -1); 
}
int main(){
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int rows = 3;
    int columns = 3;
    int key = 6;
    pair<int , int> result = linearSearch(arr, rows, columns, key);
    if(result.first == -1 && result.second == -1){
        cout<<"Element not found"<<endl;
    }
    else{
        cout<<"Element found at index: " << result.first << " " << result.second << endl;
    }
    return 0;
}