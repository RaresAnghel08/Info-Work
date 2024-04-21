#include <bits/stdc++.h>

using namespace std;
const string nume="date";
ifstream f(nume+".in");
ofstream g(nume+".out");
int n,i,il,ic,j,m,a[101][101],ok1=1,ok2=1;
int main()
{
    f>>n;
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
            f>>a[i][j];
    il=(n+1)/2;
    ic=il;
    for(i=1;i<(n+1)/2;i++)
    if(a[i][ic]!=a[n-i+1][ic])ok1=0;
    for(i=1;i<=(n+1)/2;i++)
    if(a[il][i]!=a[il][i])ok2=0;
    if(ok1) g<<"Sim pe coloana "<<ic<<'\n';
    else g<<"Nu pe col";
    if(ok2) g<<"Sim pe linia "<<il<<'\n';
    else g<<"Nu pe lin";
    g<<"\n";
    g.close();
    f.close();
    return 0;
}