#include <bits/stdc++.h>

using namespace std;
long long n,s,d;
int main()
{
    cin>>n;
    for(d=1; d*d<=n; d++)
    {
        if(n%d==0)
        {
            if(d%2==1)s+=d;
            if(d*d!=n&&(n/d)%2==1)s+=n/d;
        }
    }
    cout<<s;
    return 0;
}
