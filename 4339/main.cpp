#include <bits/stdc++.h>

using namespace std;
int a,b,c,nrp,nri;
int main()
{
    cin>>a>>b>>c;
    if(a%2==0)nrp++;
    else nri++;
    if(b%2==0)nrp++;
    else nri++;
    if(c%2==0)nrp++;
    else nri++;
    if(nrp>nri)cout<<"pare";
    else cout<<"impare";
    return 0;
}