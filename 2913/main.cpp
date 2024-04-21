#include <bits/stdc++.h>

using namespace std;
long long k,n,cn,a;
int main()
{
    cin>>n;
    n--;
    while(n%2==0)
    n/=2,k++;
    a=1<<k;
    if(a>n)cout<<"DA";
        else cout<<"NU";
    return 0;
}