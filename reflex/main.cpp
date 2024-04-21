#include <bits/stdc++.h>

using namespace std;
ifstream f("reflex.in");
ofstream g("reflex.out");
long long cmmdc(long long a,long long b)
{
    while(b)
    {
        int r=a%b;
        a=b;
        b=r;
    }
    return a;
}
long long n,m,k,n1,n2,s,c;
int main()
{
  f>>n>>m;
  n--;m--;
  k=cmmdc(n,m);
  n1=n/k;
  n2=m/k;
  if(n1%2==0) c=4;
  else 
  {if(n2%2==0)c=2;
  else c=3;}
  s=n1;
  s=s*m+1;
  g<<s<<' '<<c<<'\n';
  g<<n2-1<<' '<<n1-1;
  return 0;
}