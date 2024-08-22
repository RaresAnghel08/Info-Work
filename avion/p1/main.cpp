#include <bits/stdc++.h>

using namespace std;
const string nume="test";
ifstream f(nume+".in");
ofstream g(nume+".out");
int a[10][10];
int main()
{
    int n;
    f>>n;
    for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++)
            {
                f>>a[i][j];
            }
        }
    int nr=0,t=2;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(a[i][j]==1)
            {
                a[i][j]=t++;
                for(int k=i;k<=n;k++)
                {
                    for(int q=j;q<=n;q++)
                    {
                        if(a[k][q]==0) {
                            int x=q-1;
                            break;
                        }
                        else a[k][q]=t;
                    }
                    if(a[k][j]==0) {nr++;break;}
                    else a[k][j]=t;
                }
                t++;
            }
        }
    }
    g<<nr<<endl;
    for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++)
            {
                g<<a[i][j]<<' ';
            }
            g<<'\n';
        }
    return 0;
}