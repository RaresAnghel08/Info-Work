#include <bits/stdc++.h>

using namespace std;
int n,a[10001],fr[10001],k,i,j,nrs;
int main()
{
    cin>>n>>k;
    for(i=1;i<=n;i++)
        cin>>a[i];
    for(i=1;i<=n;i++)
    {
        fr[a[i]]++;
        int nr=0;
        for(j=1;j<=n&&nr<2;j++)
        {
            if(fr[a[j]]==1)nr++;
        }
        if(nr==2) nrs++;
    }
    cout<<nrs;
    return 0;
}
/*
5 2
1 3 1 4 1
*/