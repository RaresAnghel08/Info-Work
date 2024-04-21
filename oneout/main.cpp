#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
#pragma GCC optimize("Ofast")
using namespace std;

long long verif(long long z[], long long n)
{
	z[2]=4;
    if(n % z[2] == 0)
        return 0;
    else
    {
        for(long long i = 3; i*i<= n; i+=2)
            if(n % z[i] == 0)
                return 0;
    }
    return 1;
}
ifstream f("oneout.in");
ofstream g("oneout.out");
long long x[1001], v[1000005], c, n, cnt, j, apar[1000005], a[1000005], p = 1, lmax;
int main()
{
    ios_base::sync_with_stdio(false);
    f.tie(nullptr);
    g.tie(nullptr);
    x[2] = 4;
    for(long long i = 3; i <= 1000; i+=2)
        x[i] = i * i;
    x[1000]=1000000;
    f>>c;
    if(c == 1)
    {
        f>>n;
        for(long long i = 1; i <= n; i++)
        {
            f>>j;
            if(apar[j] == 2)
            {
                cnt++;
            }
            else
            {
                if(apar[j] == 1)
                    cnt+=0;
                else
                {
                    if(apar[j] == 0)
                    {
                        long long qq=verif(x,j);
                        cnt += qq;
                        apar[j] = qq + 1;
                    }
                }
            }
        }
        g<<cnt;
    }
    else
    {
        f>>n;
        for(long long i = 1; i <= n; i++)
        {
            f>>j;
            if(apar[j] == 2)
            {
                v[i] = 1;
            }
            else
            {
                if(apar[j] == 1)
                    v[i] = 0;
                else
                {
                    if(apar[j] == 0)
                    {
                        long long qq=verif(x,j);
                        v[i]= qq;
                        apar[j] =qq + 1;
                    }
                }
            }
        }
        for(long long i = 1; i <= n; i++)
        {
            if(v[i] == 0)
            {
                a[p] = i;
                p++;
            }
        }
        a[p] = n + 1;
        p++;
        for(long long i = 0; i < p-2; i++)
        {
            if(a[i+2] - a[i] - 2 > lmax && a[i+1] != a[i+2] - 1 && a[i] + 1 != a[i+1])
                lmax = a[i+2] - a[i] - 2;
        }
        if(lmax == 0)
            g<<-1;
        else
        {
            for(long long i = 0; i < p-2; i++)
            {
                if(a[i+2] - a[i] - 2 == lmax && a[i+1] != a[i+2] - 1 && a[i] + 1 != a[i+1])
                    cnt++;
            }
            g<<lmax<<' '<<cnt<<'\n';
            for(long long i = 0; i < p-2; i++)
            {
                if(a[i+2] - a[i] - 2 == lmax && a[i+1] != a[i+2] - 1 && a[i] + 1 != a[i+1])
                    g<<a[i]+1<<' '<<a[i+2]-1<<'\n';
            }
        }
    }
}