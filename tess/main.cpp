#include <bits/stdc++.h>

using namespace std;
int n,i,v[101];
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
    cin>>v[i];
    for(int i : v)
        cout<<v[i]<<' ';
    return 0;
}