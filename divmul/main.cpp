#include <bits/stdc++.h>

using namespace std;
const string nume="divmul";
ifstream f(nume+".in");
ofstream g(nume+".out");
long long cmmdc(long long a,long long b)
{
    while(b)
    {
        long long r=a%b;
        a=b;
        b=r;
    }
    return a;
}
long long t,i,a,b,x,y,prod,nr,j;
int main()
{
    f>>t;
    for(i=1;i<=t;i++)
    {
        f>>x>>y;
        nr=0;
        prod=y;
        //prod=prod/x;
        //if(prod%x!=0){g<<0;return 0;}
        prod=prod/x;
        //g<<prod<<endl;
        for(j=1;j*j<=prod;j++)
        {
            if(prod%j==0)
            {
                a=prod/j;
                if(cmmdc(j,a)==1&&j*a==prod)
                {
                    nr++;
                    //g<<j<<' '<<a<<endl;
                }
            }
        }
    g<<2*nr<<'\n';
    }
    return 0;
}