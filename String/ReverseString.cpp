#include<iostream>
using namespace std;
void ReverseString(vector<char>& s){
    int n = s.size();
    int start = 0, end = n-1;
    while(start < end){
        char temp = s[start];
        s[start] = s[end];
        s[end] = temp;
        start++;
        end--;
    }
}
int main(){
    int n;
    cout << "Enter number of characters : ";
    cin >> n;

    vector<char> s(n);
    cout << "Enter the characters : ";
    for(int i=0; i<n; i++){
        cin >> s[i];
    }
    ReverseString(s);
    
    cout << "Reverse String : ";
    for(char c : s) cout << c;
    cout << endl;
    return 0;
}