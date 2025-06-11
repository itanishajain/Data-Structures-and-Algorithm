//Maximum Sum Subarray of size k

#include<iostream>
using namespace std;

// BRUTE FORCE METHOD
int MaxSumSub(vector<int> v, int n, int k){
    int maxSum=0;
    for(int i=0; i<=n-k; i++){
        int sum = 0;
        for(int j=i; j<=i+k-1; j++){
            sum += v[j];
        }
        maxSum = max(sum,maxSum);
    }
    return maxSum;
}

int main(){
    int n,ele,k;
    cout << "Enter size: ";
    cin >> n;
    vector<int> v;
    cout << "Enter elements : ";
    for(int i=0; i<n; i++){
        cin >> ele;
        v.push_back(ele);
    }
    cout << "Enter window size: ";
    cin >> k;
    cout << "Manimum sum of subarray is: " << endl;
    cout << "Brute force method " << MaxSumSub(v,n,k) << endl;
    cout << "more optimised method " << MaxSumSub(v,n,k) << endl;
    return 0;
}

// More optimised way
int sum=0, maxSum=0;
int MaximumSum(vector<int> v, int n, int k){
    for(int i=0; i<=n-k; i++){
        sum = sum - v[i-1] + v[i+k-1];
        maxSum = max(sum, maxSum);
    }
    return maxSum;
}