#include<iostream>
using namespace std;
int MaxRowSum(int arr[][3], int row, int col){
    int maxSum = INT_MIN;
    for(int i=0; i<row; i++){
        int sum =0;
        for(int j=0; j<col; j++){
            sum += arr[i][j];
        }
        if(sum > maxSum){
            maxSum = sum;
        }
    }
    return maxSum;
}
int main(){
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int rows = 3;
    int cols = 3;
    int MaxValue = MaxRowSum(arr, rows, cols);
    cout << "The maximum value of sum of row is :" << MaxValue << endl;
    return 0;
}