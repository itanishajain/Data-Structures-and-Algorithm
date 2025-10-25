// Reverse Words in a string

#include<iostream>
using namespace std;

string ReverseWord(string s){
    int n = s.length();
    string ans = "";
    reverse(s.begin(), s.end());
    for(int i=0; i<n; i++){
        string words = "";
        while(s[i] != ' ' && i<n){
            words += s[i];
            i++;
        }
        reverse(words.begin(), words.end());
        if(words.length() > 0){
            ans += " " + words;
        }
    }
    return ans.substr(1);
}

int main(){
    string str;
    cout << "Enter string: ";
    getline(cin, str);
   
    cout << "reversed string : " << ReverseWord(str) << endl;
    return 0;
}