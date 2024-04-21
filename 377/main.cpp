#include <bits/stdc++.h>

using namespace std;
int nrdiv(int n)
{
    int nr=0;
    for(int d=2; d*d<=n; d++)
    {
        if(n%d==0&&d*d!=n) nr+=2;
        else if(n%d==0&&d*d==n)nr++;
    }
    return nr;
}
int n,i,poz,mx,x;
int main()
{
    cin>>n;
    for(i=1; i<=n; i++)
    {
        x=nrdiv(i);
        if(x>mx)
        {
            mx=x;
            poz=i;
        }
        //cout<<i<<' '<<nrdiv(i)<<endl;
    }
    cout<<poz;
    //cout<<endl<<nrdiv(12);
    return 0;
}
