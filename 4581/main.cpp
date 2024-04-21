#include <bits/stdc++.h>

using namespace std;
const string nume="kpower";
ifstream f(nume+".in");
ofstream g(nume+".out");
long long c,n,k,cop,p,pmax=0,mx,i,l,lmax,x,s,smax;
int main()
{
    f>>c>>k>>n;
    if(c==1)
    {
        for(i=1;i<=n;i++)
        {
            f>>x;
            cop=x;
            p=0;
            while(cop%k==0)
            {
                cop/=k;
                p++;
                if(cop==0) break;
            }
            if(cop==1)
                if(p>pmax) pmax=p,mx=x;
        }
        g<<mx;
    }
    else if(c==2)
    {
        for(i=1;i<=n;i++)
        {
            f>>x;
            cop=x;
            p=0;
            while(cop%k==0&&cop!=1)
            {
                cop/=k;
                if(cop==0) break;
                //p++;
            }
            if(cop==1)l++;
            else l=0;
            if(l>lmax) lmax=l;
        }
        g<<lmax;
    }
    else if(c==3)
    {
        for(i=1;i<=n;i++)
        {
            f>>x;
            cop=x;
            //p=0;
            while(cop%k==0&&cop>1)
            {
                cop/=k;
                if(cop==0) break;
                //p++;
            }
            if(cop==1||x==1)l++,s+=x;
            else l=0,s=0;
            if(l>lmax) {lmax=l;if(s>smax)smax=s;}
        }
        g<<smax;
    }
    return 0;
}