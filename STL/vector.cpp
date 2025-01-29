#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;

    v.push_back(2);
    cout << "capacity: " << v.capacity() << endl;
    v.push_back(2);
    cout << "capacity: " << v.capacity() << endl;
    v.push_back(2);
    cout << "capacity: " << v.capacity() << endl;

    cout << "size: " << v.size() << endl;

    v.pop_back();
    cout << "after using pop_back function. " << endl;
    cout << "capacity: " << v.capacity() << endl;
    cout << "size: " << v.size() << endl;

    return 0;
}