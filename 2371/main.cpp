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
int n,m,k;
int main()
{
  cin>>n>>m;
  k=cmmdc(n,m);
  cout<<n/k+m/k-2;
  return 0;
}