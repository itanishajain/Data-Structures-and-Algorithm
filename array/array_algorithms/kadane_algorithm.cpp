#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n = 7;
    int arr[]= {3,-4,5,4,-1,7,-8};
    int maxSum = INT_MIN;
    for(int st=0; st<n;st++){
        int CurrentSum = 0;
        for(int end=st; end<n; end++){
            CurrentSum += arr[end];
            maxSum = max(maxSum, CurrentSum);
        }
    }
    cout << "Maximum Subarray is : " << maxSum ;
    cout << endl;


// KADANE'S ALGORITHM

    int maxiSum = INT_MIN, CurrSum = 0;
    for(int val : arr){
        CurrSum += val;
        maxiSum = max(CurrSum,maxiSum);
        if(CurrSum<0){
            CurrSum = 0;
        }
    }
    cout << "Maximum Subarray is through kadane's algorithm: " << maxiSum ;
    cout << endl;
    return 0;
}