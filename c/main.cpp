#include <bits/stdc++.h>

using namespace std;
const string nume="date";
ifstream f(nume+".in");
ofstream g(nume+".out");
int n,r,i,x,k;
int a[1000],v[1000];
int main()
{
    f>>n>>r;
    for(i=1;i<=n;i++)
        {
            f>>x;
            v[x]=1;
        }
    for(i=1;i<=999;i++)
    {
        if(v[i]==1)a[++k]=i;
    }
    // for(i=1;i<=k;i++)
    // g<<a[i]<<' ';
    // g<<endl;
    for(i=2;i<=k;i++)
    {
        if(a[i]!=a[i-1]+r)
        {g<<"NU EXISTA";
        return 0;}
    }
    g<<r;
    return 0;
}