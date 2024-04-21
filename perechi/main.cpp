#include <bits/stdc++.h>

using namespace std;
const string nume="perechi";
ifstream f(nume+".in");
ofstream g(nume+".out");
int n,d=2,nrp=1;
int main()
{
    f>>n;
    while(d*d<=n)
    {
        int p=0;
        while(n%d==0)p++,n/=d;
        nrp=nrp*(2*p+1);
        d++;
    }
    if(n!=1)nrp*=3;
    g<<(nrp+1)/2;
    return 0;
}
struct elev
{
    int medie,numar
}v[101];
cin>>v[i].medie>>v[i].numar;
