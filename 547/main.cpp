#include <bits/stdc++.h>

using namespace std;
int n,nr,v[1001],s1,s2,s3,s4,i;
float ma;
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>v[i];
        if(v[i]%2==0)s1+=v[i];
        if(i%2==0)s2+=v[i];
        if(v[i]%10==0) s3++;
        if(v[i]%3==0&&i%2==1)s4+=v[i];
    }
    for(i=n;i>=1;i--)cout<<v[i]<<' ';
    cout<<'\n'<<s1<<'\n'<<s2<<'\n'<<s3<<'\n'<<s4;
    return 0;
}