#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque <int> d;
    d.push_back(2);
    d.push_back(5);
    d.push_front(8);
    
    for(int i=0; i<d.size(); i++)
    {
        cout << d[i] << endl;
    }
    cout << "after removing back element." << endl;
    d.pop_back();
    for(int i=0; i<d.size(); i++)
    {
        cout << d[i] << endl;
    }
    cout << "front elelment: " << d.front() << endl;
    cout << "last elelment: " << d.back() << endl;

    cout << "Before erase size : " << d.size() << endl;
    d.erase(d.begin(),d.begin()+1);  // It is erasing the secong element
    cout << "After erase size : " << d.size() << endl;
    return 0;
}