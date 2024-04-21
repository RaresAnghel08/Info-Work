#include <bits/stdc++.h>

using namespace std;
bool pp(int x)
{
    if((int)sqrt(x)*(int)sqrt(x)==x) return true;
    else return false;
}
int n,i,v[101],a[101],k,cnt;
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>v[i];
        if(pp(v[i])) a[++k]=v[i],v[i]=-1;
    }
    sort(a+1,a+k+1);
    cnt=0;
    for(i=1;i<=n;i++)
    {
        if(v[i]!=-1) cout<<v[i]<<' ';
        else cout<<a[++cnt]<<' ';
    }
    return 0;
}
/*
11
3 7 49 5 16 4 9 6 25 13 19
*/