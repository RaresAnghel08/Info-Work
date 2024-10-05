#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int prim(int n)
{
    if(n==2)return 1;
    if(n<2||(n>2&&n%2==0))return 0;
    for(int d=3;d*d<=n;d+=2)
        if(n%d==0)return 0;
    return 1;
}
void sub(int n,int &a,int &b)
{
    int x=n+1;
    a=b=0;
    n--;
    while(n&&a==0)
    {
        if(n%2==1||n==2)
        	if(prim(n))a=n;
        n--;
    }
    n=x;
    while(n&&b==0)
    {
        if(n%2==1||n==2)
        	if(prim(n))b=n;
        n++;
    }
}
int main()
{
    int a=0,b=0;
    int n=5;
    sub(n,a,b);
    cout<<a<<' '<<b;
    return 0;
}