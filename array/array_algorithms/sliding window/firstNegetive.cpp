// First negetive integer in every window of size k

#include<iostream>
using namespace std;

vector<int> FirstNegetive(vector<int> v, int n, int k){
    vector<int> result;
    for(int i=0; i<=n-k; i++){
        bool found = false;
        for(int j=0; j<k; j++){
            int ele = v[i+j];
            if(ele < 0){
                result.push_back(ele);
                found = true;
                break;
            }
        }
        if(!found){
            result.push_back(0); // Optional: if no negative found in window
        }
    }
    return result;
}

int main(){
    int n, ele,k;
    cout << "Enter n: ";
    cin >> n;
    vector<int> v;
    cout << "Enter Elements: ";
    for(int i=0; i<n; i++){
        cin >> ele;
        v.push_back(ele);
    }
    cout << "Enter window size: ";
    cin >> k; 
    vector<int> result = FirstNegetive(v,n,k);
    cout << "Result is: " ;
    for(int i=0; i<result.size(); i++){
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}