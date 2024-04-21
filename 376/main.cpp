#include <bits/stdc++.h>

using namespace std;
long long n,s,d;
float nr;
int main()
{
    cin>>n;
    for(d=1; d*d<=n; d++)
    {
        if(n%d==0)
        {
            if(d*d!=n)s+=d+n/d,nr+=2;
            else s+=d,nr++;
        }
    }
    cout<<setprecision(2)<<fixed<<s/nr;
    return 0;
}
