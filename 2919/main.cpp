#include <bits/stdc++.h>

using namespace std;
long long n,i,s,s1,sum,j,k,s2,dif;
int main()
{
  cin>>n;
  s=n*(n+1)/2;
  if(s%2==0) s=s/2;
  else {s=(s+1)/2;
  s1=s-1;}
  for(i=1;i<=n;i++)
  {
    sum+=i;
    if(sum==s||sum==s1)
    {
        for(j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        cout<<'\n';
        for(j=i+1;j<=n;j++) cout<<j<<' ';
        return 0;
    }
    else if(sum>s)
    {
        dif=sum-s;
        for(j=1;j<=i;j++)
        if(j!=dif) cout<<j<<' ';
        cout<<'\n';
        cout<<dif<<' ';
        for(j=i+1;j<=n;j++) cout<<j<<' ';
        return 0;
    }
  }
  return 0;
}
