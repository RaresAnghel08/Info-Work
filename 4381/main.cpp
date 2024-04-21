#include <bits/stdc++.h>

using namespace std;
int v[501],n,a,b,nr;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)cin>>v[i];
    for(int i=1;i<=(n+1)/2;i++)
    {
        a=v[i]/10%10;
        b=v[n-i+1]/10%10;
        if(a==b&&i!=n-i+1)
        {
            nr++;
            //cout<<v[i]<<' '<<v[n-i+1]<<endl;
        }
    }
    cout<<nr;
    return 0;
}