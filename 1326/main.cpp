#include <bits/stdc++.h>

using namespace std;
int mx=0,mn=10000,v[1001],p1,p2,n,i;
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>v[i];
        if(v[i]>mx) mx=v[i],p2=i;
        if(v[i]<mn) mn=v[i],p1=i;
    }
    if(p1>p2) swap(p1,p2);
    sort(v+p1+1,v+p2+1);
    for(i=1;i<=n;i++)
        cout<<v[i]<<' ';
    return 0;
}