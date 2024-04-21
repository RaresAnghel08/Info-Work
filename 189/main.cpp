#include<iostream>
using namespace std;
int v[11],ok,i,n,x;
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>v[i];
    for(i=1;i<=n;i++)
    {
        ok=1;
        x=v[i];
        while(v[i]>9 && v[i]%10<(v[i]/10)%10) v[i]/=10;
        if(v[i]==x || v[i]<10)ok=0;
        while(v[i]>9 && v[i]%10>(v[i]/10)%10)
        v[i]/=10;
        if(v[i]>9)ok=0;
        cout<<ok<<endl;
    }
}
