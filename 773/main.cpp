#include <iostream>

using namespace std;
int n,m,i,f[1000005],x,a[101][101],j;
int main()
{
    cin>>n>>m;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            cin>>a[i][j];
            if(i==1||j==1||i==n||j==m)f[a[i][j]]++;
        }
    }
    for(i=0; i<=1000000; i++)
        if(f[i]) cout<<i<<' ';
    return 0;
}
