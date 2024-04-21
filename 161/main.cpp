#include <bits/stdc++.h>

using namespace std;
int n,i,v[201],s,ma,k;
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>v[i];
        if(v[i]!=0)
        {
            s+=v[i];
            k++;
        }
    }
    ma=s/k;
    for(i=1;i<=n;i++)
    {
        if(v[i]==0) cout<<ma<<' ';
        else cout<<v[i]<<' ';
    }
    return 0;
}