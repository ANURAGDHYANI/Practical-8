#include<iostream>
using namespace std;

int main()
{
    int a = 10;
    int *p;
    int **q;
    p = &a;
    q = &p;
    **q=98;
    cout << *p;
    
    cout << **q;
    return 0;
}
