#include <iostream>
using namespace std;
long long n,x,y,z,a,b,c,r;
int main()
{
    cin>>n;
    x=n*4-4;
    y=(n-2)*4-4;
    z=(n-4)*4-4;
    a=x; b=y;
    while(b)
    {
        r=a%b;
        a=b;
        b=r;
    }
    c=x*y/a;
    a=c; b=z;
    while(b)
    {
        r=a%b;
        a=b;
        b=r;
    }
    c=c*z/a;
    cout<<c/x<<" "<<c/y<<" "<<c/z;
    return 0;
}