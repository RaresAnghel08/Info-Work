#include <bits/stdc++.h>

using namespace std;
const string nume="date";
ifstream f(nume+".in");
ofstream g(nume+".out");
int i,v[101],mx1,mx2,n;
int main()
{
    f>>n;
    f>>v[1]>>v[2]>>v[3];
    for(i=4;i<=n;i++)
    {
        f>>v[i];
        if(v[i]%2==0)
        {
            if(v[i]>mx1){
                if(v[i-1]%2==1&&v[i-2]%2==1&&v[i-2]%2==1)
                mx2=mx1,mx1=v[i];
            }
            else if (v[i]==mx1) mx1=v[i],mx2=v[i];
            else if(v[i]<mx1)
            {
                if(v[i]>=mx2)
                {
                    if(v[i-1]%2==1&&v[i-2]%2==1&&v[i-2]%2==1) mx2=v[i];
                }
            }
        }
    }
    g<<mx1<<' '<<mx2;
    return 0;
}
//12 
// 1 3 5 8 5 7 9 22 1 3 5 16