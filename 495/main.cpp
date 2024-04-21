#include <bits/stdc++.h>

using namespace std;
long long prim(long long n)
{
    if(n<2)return 0;
    for(long long d=2;d*d<=n;d++)
        if(n%d==0)return 0;
    return 1;
}
int n,i,v[201],x,k;
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        if(prim(x))v[++k]=x;
    }
    for(i=k;i>=1;i--)
    cout<<v[i]<<' ';
    return 0;
}