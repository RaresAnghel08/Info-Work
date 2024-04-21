#include <bits/stdc++.h>

using namespace std;
const string nume="date";
ifstream f(nume+".in");
ofstream g(nume+".out");
int n,m,a[101][101],b[101][101],i,j;
int main()
{
    f>>n>>m;
    for(i=1;i<=n;i++)
    for(j=1;j<=m;j++)
    f>>a[i][j];
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            b[i][j]=a[j][m-i+1];
        }
    }
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        g<<b[i][j]<<' ';
        g<<"\n";
    }
    return 0;
}