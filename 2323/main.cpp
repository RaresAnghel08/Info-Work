#include <bits/stdc++.h>

using namespace std;
unsigned long long n,d,p, nr=1, nrdiv=1,a;
int main()
{
    cin>>n;
    d=2;
    a=n;
    while(d*d<=n)
    {
        p=0;
        while(n%d==0)
        {
            p++,n/=d;
            //cout<<d<<' '<<endl;
        }
        if(p)
        {
            //cout<<p<<' ';
            nr=a*p;
            //cout<<nr<<' ';
            nrdiv=(nrdiv*(nr+1))%59999;
            //cout<<nrdiv<<' '<<d<<endl;
        }
        d++;
        //if(n==1) break;
    }
    if(n!=1) nrdiv=(nrdiv*(a+1))%59999;
    cout<<nrdiv;
    return 0;
}
