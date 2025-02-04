#include <iostream>
#include <map> // Correct header for std::map
using namespace std;

int main() {
    map<int,string> m; // std::map should be recognized now

    m[1] = "abc";
    m[5] = "cdc";
    m[3] = "efg";

    m.insert({{7, "abc"}, {8, "cdc"}, {6, "efg"}});

    // Use `const auto&` to avoid copying elements
    cout << "Before erase: " << endl;
    for (const auto& i : m) {
        cout << i.first <<" " << i.second << endl;
    }
    cout << "5 element: " << m.count(5) << endl;

    cout << "After erase: " << endl;
    m.erase(5);
    for (const auto& i : m) {
        cout << i.first <<" " << i.second << endl;
    }

    auto it = m.find(3);
    if (it != m.end()) {
        cout << "Found: " << it->first << " " << it->second << endl;
    } else {
        cout << "Not found" << endl;
    }
    return 0;
}
