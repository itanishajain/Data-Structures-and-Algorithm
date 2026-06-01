#include<iostream>
#include<vector>

using namespace std;
bool checkSortedArray(vector<int> arr){
    int n = arr.size();
    for(int i=1; i<n; i++){
        if(arr[i-1] > arr[i]){
            return false;
        }
    }
    return true;
}
int main(){
    int n ;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    bool value = checkSortedArray(arr);
    cout << boolalpha << value << endl;
    return 0;
}