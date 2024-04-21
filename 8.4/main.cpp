#include <bits/stdc++.h>

using namespace std;
int nrcif(int n)
{
    int nr=0;
    do
    {
        nr++;
        n/=10;
    }while(n);
    return nr;
}
int c0,c1,c2,p,i,ok,cop,a;
int main()
{
    cin>>p>>c0>>c1>>c2;
    for(i=p;i<=1000;i+=p)
    {
        ok=1;
        cop=i;
        while(cop)
        {
            a=cop%10;
            if(a!=c0&&a!=c1&&a!=c2) {ok=0;break;}
            cop/=10;
        }
        if(ok==1&&i%p==0){cout<<nrcif(i)<<endl<<i;return 0;}
    }
    cout<<-1;
    return 0;
}