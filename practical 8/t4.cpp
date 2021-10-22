#include <iostream>
using namespace std;
long  fact (int n)
{
    int p=1;
    while(n!=0)
    {
        p=p*n;
        --n;
    }
    return p;
}
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    
    cout<<"Factorial is : "<<fact(n);
    
return 0;
}
