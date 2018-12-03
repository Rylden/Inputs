#include<iostream>
#include"string.h"
#include<vector>
using namespace std;
int main ()
}

    int x(9); int& y =x; int *z = &y;
    int q = *(new int(7));
    cout<<x<<y<<*z<<q<<endl; // 9 9 9 7
    x++;
    q = x + y;
    z = &q;
    y = ++x-2;
    cout<<x<<y<<*z<<q<<endl; // 9 9 20 20
    x = y++ +3; // x=12
    cout<<x<<y<<endl;
    x=12;
    q = ++x -1; // x=13
    z = &y;
    int m=13;
    int n=++m -1;

    cout<<x<<y<<*z<<q<<m<<n<<endl; // 13 13 13 12
}