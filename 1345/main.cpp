#include <bits/stdc++.h>

using namespace std;
const string nume="kprim";
ifstream f(nume+".in");
ofstream g(nume+".out");
long long prim(long long n)
{
    //if(n<2)return 0;
    for(long long d=2;d*d<=n;d++)
        if(n%d==0)return 0;
    return 1;
}
long long k,i,nr;
int main()
{
    f>>k;
    for(i=2;i<=200000;i++)
    {
        if(prim(i))nr++;
        if(nr==k+1) {g<<i*i;return 0;}
    }
    return 0;
}