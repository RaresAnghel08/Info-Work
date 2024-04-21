#include <bits/stdc++.h>

using namespace std;
long long a,b,x,d,ca,cb,sa=1,sb=1;
int main()
{
    cin>>a>>b;
    ca=a;cb=b;
    d=2;
    while (d*d<=a)
    {
        int ok=0;
        while(a%d==0)
            a/=d,ok++;
        if(ok) sa*=d;
        d++;
    }
    if(a!=1) sa*=a;
    d=2;
    while (d*d<=b)
    {
        int ok=0;
        while(b%d==0)
            b/=d,ok++;
        if(ok)sb*=d;
        d++;
    }
    if(b!=1) sb*=b;
    if(sa>sb) cout<<ca;
    else if(sa==sb)cout<<min(ca,cb);
    else cout<<cb;
    return 0;
}