#include <bits/stdc++.h>

using namespace std;
ifstream f("placare1.in");
ofstream g("placare1.out");
unsigned long long cmmdc(unsigned long long a,unsigned long long b)
{
    while(b)
    {
        unsigned long long r=a%b;
        a=b;
        b=r;
    }
    return a;
}
unsigned long long cmmmc(unsigned long long a,unsigned long long b)
{
    return a*b/cmmdc(a,b);
}
unsigned long long n,a,b;
int main()
{
  f>>n>>a>>b;
  g<<max(cmmmc(n,a)/n*b,cmmmc(n,b)/n*b);
  return 0;
}
