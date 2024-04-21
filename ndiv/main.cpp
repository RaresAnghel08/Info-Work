#include <bits/stdc++.h>

using namespace std;
const string nume="ndiv";
ifstream f(nume+".in");
ofstream g(nume+".out");
long long nrdiv(long long n)
{
    long long nr=0;
    for(long long d=1;d*d<=n;d++)
    {
        if(n%d==0)
        {
            if(d*d==n)nr++;
            else nr+=2;
        }
    }
    return nr;
}
long long a,b,s,i;
int main()
{
    f>>a>>b;
    for(i=a;i<=b;i++)
    {
        s+=nrdiv(i);
    }
    g<<s;
    return 0;
}