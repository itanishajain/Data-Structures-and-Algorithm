#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int> maxi;
    maxi.push(5);
    maxi.push(7);
    maxi.push(3);
    int n = maxi.size();
    for (int i = 0; i < n; i++)
    {
        cout << maxi.top() << " ";
        maxi.pop();
    }
    cout << endl;
    
    priority_queue<int, vector<int> , greater<int> > mini;
    mini.push(3);
    mini.push(8);
    mini.push(2);
    int m = mini.size();
    for (int i = 0; i < m; i++)
    {
        cout << mini.top() << " ";
        mini.pop();
    }
    cout << endl;
    return 0;
}