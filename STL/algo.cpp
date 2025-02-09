#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> v;
    v.push_back(2);
    v.push_back(5);
    v.push_back(6);
    v.push_back(9);

    cout << "Binary Search: " << (binary_search(v.begin(), v.end(), 5));
    cout << endl;
    return 0;
}
