// Print sum of values in a give range of indices

#include<iostream>
using namespace std;
int sum=0;
int sumIndices(vector<int> &v, int l, int r){
    for(int i=l; i<=r; i++){
        sum += v[i];
    }
    return sum;
}
int main(){
    int n,ele,l,r;
    cin >> n;

    vector<int> v;
    for(int i=0; i<n; i++){
        cin >> ele;
        v.push_back(ele);
    }
    cout << "Give range(l-r) :";
    cin >> l >> r;
    cout << sumIndices(v,l,r) << endl;
    return 0;
}