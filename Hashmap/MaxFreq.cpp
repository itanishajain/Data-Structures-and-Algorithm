// Maximum Frequency Number

#include<iostream>
#include<map>
using namespace std;
int MaxFrequencyMat(vector<int>& arr, int n){
    unordered_map<int, int> count;
    int maxFeq = 0;
    int Maxans = 0;
    for(int i=0; i<n; i++){
        count[arr[i]]++;
        maxFeq = max(maxFeq, count[arr[i]]);
    }
    for(int i=0; i<n; i++){
        if(maxFeq == count[arr[i]]){
            Maxans = arr[i];
            break;
        }
    }
    return Maxans;
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
    
    cout << "Maximum frequency number will be: " << MaxFrequencyMat(arr, n) << endl;
    return 0;
}