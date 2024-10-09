#include<iostream>
using namespace std;
int main(){
    int a = 1, b = 2;
    if (a-- > 0 || ++b > 2)
    {
        cout << "Stage1- inside-if" ;
    }
    else{
        cout << "Stage2- inside-else" ;
    }
    return 0;
}


