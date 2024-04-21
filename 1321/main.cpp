#include <iostream>

using namespace std;
int n,a[1001],v,poz,i,mx,ok;
int main()
{
    cin>>n;
    for(i=1; i<=n; i++)
        cin>>a[i];
    mx=a[1];
    poz=1;
    for(i=2; i<=n; i++)
        if(a[i]>mx) mx=a[i],poz=i;
    ok=1;
    if(poz==1 || poz==n)ok=0;
    else
    {
        for(i=1; i<poz; i++)
            if(a[i]>=a[i+1])ok=0;
        for(i=poz; i<n; i++)
            if(a[i]<=a[i+1])ok=0;
    }
    if(ok==0)cout<<"NU"<<" ";
    else cout<<"DA"<<" ";
    return 0;
}