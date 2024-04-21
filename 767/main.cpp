#include <iostream>

using namespace std;
int a[105][105],n,m,i,j,s,k;
int main()
{
    cin>>n>>m;
    for(i=1; i<=n; i++)
    {
        s=0;
        for(j=1;j<=m;j++)
        {
           cin>>a[i][j];
           s+=a[i][j];
        }
        a[i][0]=s;
    }
    for(i=1;i<=n;i++)
    {
        for(j=i+1;j<=n;j++)
            if(a[i][0]>a[j][0])
        {
            for(k=0;k<=m;k++)
                swap(a[i][k],a[j][k]);
        }
    }
    for(i=1; i<=n; i++)
    {
        for(j=1;j<=m;j++)
        {
           cout<<a[i][j]<<' ';
        }
        cout<<'\n';
    }
    return 0;
}
