#include <bits/stdc++.h>

using namespace std;
int mx=0,mn=100,v[1001],p1,p2,n,i,a,b,j;
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>v[i];
        if(v[i]>mx) mx=v[i],p1=i;
        if(v[i]<mn) mn=v[i],p2=i;
    }
    a=min(p1,p2);
    b=max(p1,p2);
    for(i=1;i<a;i++)
    cout<<v[i]<<' ';
    for(i=a;i<n;i++)
        for(j=i+1;j<=b;j++)
            if(v[i]>v[j]) swap(v[i],v[j]);
    for(i=a;i<=n;i++)
        cout<<v[i]<<' ';
    return 0;
}
//8
//2 17 11 9 4 1 7 6