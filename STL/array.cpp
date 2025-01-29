#include<iostream>
#include<array>
using namespace std;
int main(){
    int basic[3] = {1,2,3};  // we don't use this because it is static
    array<int,4>a = {1,2,3,4};

    int size = a.size();
    for(int i=0; i<size; i++)
    {
        cout << a[i] << endl;
    }

    cout << "Element at index 2: " << a.at(2) << endl;
    cout << "array empty or not: " << a.empty() << endl;
    cout << "First element in array: " << a.front() << endl;
    cout << "last element in array: " << a.back() << endl;
    return 0;
}