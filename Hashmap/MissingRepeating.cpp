#include<iostream>
using namespace std;

pair<int, int> MiisingRepeating(vector<int>& nums, int n){
    unordered_map<int, int> mr;
    sort(nums.begin(), nums.end());
    int miss = 0, rep = 0;
    for(int i=0; i<n; i++){
        mr[nums[i]]++;
    }
    for(int i=1; i<=n; i++){
        if(mr[i] == 0) miss = i;
        if(mr[i] > 1) rep = i;
    }
    return make_pair(miss, rep);
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
    pair<int, int> result =  MiisingRepeating(arr, n);
    cout << "Missing " << result.first<< " Repeating " << result.second << endl;
    return 0;
}