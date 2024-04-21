#include <bits/stdc++.h>

using namespace std;
long long a,b,d,p,ok;
int main()
{
    cin>>a>>b;
    //if(a>b)swap(a,b);
    d=2;
    while(d*d<=a)
    {
        bool imp=false;
        ok=0;
        p=0;
        while(a%d==0)
            a/=d,p++;
        if(p)while(b%d==0)b/=d,ok++,imp=true;
        if(ok==0&&imp==true) {cout<<"NU";return 0;}
        d++;
    }
    //cout<<a<<' '<<b<<endl;
    if(a%b==0) a/=b;
    if(b%a==0)b/=a;
    if(a!=b) cout<<"NU";
    else cout<<"DA";
    return 0;
}