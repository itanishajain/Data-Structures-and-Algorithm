#include <iostream>
#include <stack>
using namespace std;
int main() {
    stack<int> s;
    s.push(10);
    s.push(20);
    cout << "Top element: " << s.top() << endl;

    s.pop();
    cout << "Removing top element." << endl;
    cout << "Top element: " << s.top() << endl;

    cout << "Size of stack: " << s.size() << endl;

    cout << "Empty or not: " << s.empty() << endl;
    return 0;
}
