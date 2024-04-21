#include <bits/stdc++.h>

using namespace std;
int n,v[501],s,i;
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>v[i];
        s+=v[i];
    }
    for(i=1;i<=n;i++)
    {
        cout<<s-v[i]<<' ';
    }
    return 0;
}