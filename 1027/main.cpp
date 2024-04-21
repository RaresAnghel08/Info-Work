#include <bits/stdc++.h>

using namespace std;
ifstream f("cool.in");
ofstream g("cool.out");
int a[1005],v[5005],i,n,c,k,ok=1,cnt,j,poz,fr[1005],nr,mx,amax = -1, amin = 1001, lmax = -1,ap[5005];
void sterge()
{
    for(int i = 1; i <= n; i++)
        ap[i] = 0;
}
int main()
{
  f>>c;
  f>>n>>k;
  for(i=1;i<=n;i++)
  {
    f>>v[i];
    if(i<=k) a[i]=v[i];
  }
  if(c==1)
  {
    sort(a+1,a+k+1);
    //for(i=1;i<=k;i++)g<<a[i]<<' ';
    //g<<'\n';
    ok=1;
    for(j=2;j<=k;j++)
    {
        //fr[a[j]++];
        if(a[j]-a[j-1]!=1){ok=0;}
    }
    //g<<ok<<'\n';
    if(ok)g<<a[k];
    else
    {
        for(i=a[1];i<=a[k];i++)
        {
            fr[a[i]]++;
        }
        for(i=a[1];i<=a[k];i++)
        if(fr[i]==1) nr++;
        g<<nr;
    }
  }
  else
  {
  for(i = 1; i< n; i++)
        {
            amax = a[i]; amin = a[i]; ap[a[i]]++;
            for(int j = i+1; j <= n; j++)
            {
                if(ap[a[j]]) break;
                ap[a[j]] = 1;
                if(a[j] > amax)
                {
                    amax = a[j];
                }
                else if(a[j] < amin)
                {
                    amin = a[j];
                }
                ap[a[j]]++;
                if(amax-amin==j-i)
                {
                    if(amax-amin+1 > lmax)
                         {lmax = amax-amin+1; cnt = 1;}
                    else if(amax-amin+1 == lmax){cnt++;}
            }
            sterge();
        }
       
    } g<< lmax << '\n' << cnt;}
  return 0;
}
