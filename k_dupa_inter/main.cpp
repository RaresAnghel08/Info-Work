#include <bits/stdc++.h>

using namespace std;
int n,m,i,j,a[1001],b[1001],x,y,mid;
int main()
{
    cin>>n>>m>>k;
    for(i=1;i<=n;i++)
        cin>>a[i];
    for(i=1;i<=m;i++)
        cin>>b[i];
    //caut in b
    st=1;dr=m;
    while(st<=dr)
    {
        mij=(st+dr)/2;
        x=1;y=n;
        while(x<=y)
        {
            mid=(x+y)/2;
            if(a[mid]<=b[mij])x=mid+1,ok=mid;
            else y=mid-1;
        }
        
    }
    return 0;
}