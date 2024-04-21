#include <bits/stdc++.h>

using namespace std;
long long prim(long long n)
{
    //if(n<2)return 0;
    for(long long d=2;d*d<=n;d++)
        if(n%d==0)return 0;
    return 1;
}
long long n,d,x,cn,ok;
int main()
{
    cin>>n;
    if(prim(n)){cout<<"prim";return 0;}
    else if(sqrt(n)==int(sqrt(n))&&prim(sqrt(n))) {cout<<"patrat prim";return 0;}
    else
    {
        for(d=2;d*d<=n;d++)
        {
            if(prim(d)&&n%d==0)
            {

                long long a=n/d;
                if(prim(a)) 
                {
                    cout<<"aproape prim";
                    cout<<endl<<d<<' '<<a;
                    return 0;
                }
            }
        }
    }
    cout<<"compus";
    return 0;
}