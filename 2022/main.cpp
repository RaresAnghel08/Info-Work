#include <bits/stdc++.h>

using namespace std;
int cmmdc(int a,int b)
{
    while(b)
    {
        int r=a%b;
        a=b;
        b=r;
    }
    return a;
}
int i,n,v[20222030],a[20222030],nr,x,q;
int main()
{
    cin>>n;
    for(i=1; i<=20222022; i+=2)
    {
        q=i;
        if(cmmdc(q,2022)==1) a[++nr]=i;
    }
    for(i=1;i<=nr;i++)
    if(a[i]<1000)cout<<a[i]<<' ';
    else break;
    cout<<endl<<endl;
    for(i=1; i<=n; i++)
    {
        cin>>x;
        v[i]=a[x];
    }
    for(i=1; i<=n; i++)cout<<v[i]<<" ";
    return 0;
}
