// Majority Element (Leetcode 169)

#include<iostream>
using namespace std;

int MajorityElement(vector<int>& arr, int n){
    unordered_map<int, int> mj;
    int ele;
    for(int val : arr){
        mj[val]++;
        if(mj[val] > 1) ele = val;
    }
    return ele;
}

int main(){
    int n;
    cout << "Enter size : " ;
    cin >> n;
    vector<int> arr(n);
    cout << "Enter array elements : ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    } 
    
    cout << "Majority element will be: " << MajorityElement(arr, n) << endl;
    return 0;
}