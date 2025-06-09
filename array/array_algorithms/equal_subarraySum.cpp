// Two Sequence Subarray with Equal Sum in an Array(Prefix Sum == Suffic Sum)

#include<iostream>
using namespace std;
bool equalSum(vector<int> &v){
    int totalSum=0,prefixSum=0;
    for(int i=0; i<v.size(); i++){
        totalSum += v[i];
    }
    for(int i=0; i<v.size(); i++){
        prefixSum += v[i];
        int suffixSum = totalSum - prefixSum;
        if(prefixSum == suffixSum){
            return true;
        }
    }
    return false;
}
int main(){
    int n,ele;
    cout << "Enter n : ";
    cin >> n;
    vector<int> v;

    cout << "Enter elemets: ";
    for(int i=0; i<n; i++){
        cin >> ele;
        v.push_back(ele);
    }

    cout << "Does 2 subarray have equal sum? " << equalSum(v) << endl;
    return 0;
}