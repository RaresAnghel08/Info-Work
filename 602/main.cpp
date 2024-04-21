#include<bits/stdc++.h>
using namespace std;
ifstream fin("regine.in");
ofstream fout("regine.out");
int a[105][105],n,m,v[510],mx=-1,s=1,asem,k,q,nr,i,j,nr2;
int main(){
    fin>>n>>m;
    int x,y;
    for(int i=1;i<=m;i++)
    {
        fin>>x>>y;
        a[x][y]=1;
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            nr=0;
            if(a[i][j]==1){
                k=i-1;
                while(k>=1){
                    if(a[k][j]==1){
                        nr++;
                        break;
                    }
                    k--;
                }
                k=i+1;
                while(k<=n){
                    if(a[k][j]==1){
                        nr++;
                        break;
                    }
                    k++;
                }
                k=j-1;
                while(k>=1){
                    if(a[i][k]==1)
                    {
                        nr++;
                        break;
                    }
                    k--;
                }
                k=j+1;
                while(k<=n){
                    if(a[i][k]==1)
                    {
                        nr++;
                        break;
                    }
                    k++;
                }
                k=j-1;
                q=i-1;
                while(k>=1 && q>=1){
                    if(a[q][k]==1){
                        nr++;
                        break;
                    }
                    k--,q--;
                }
                k=j-1;
                q=i+1;
                while(k>=1 && q<=n){
                    if(a[q][k]==1){
                        nr++;
                        break;
                    }
                    k--,q++;
                }
                k=j+1;
                q=i+1;
                while(k<=n && q<=n){
                    if(a[q][k]==1){
                        nr++;
                        break;
                    }
                    k++,q++;
                }
                k=j+1;
                q=i-1;
                while(k<=n && q>=1){
                    if(a[q][k]==1){
                        nr++;
                        break;
                    }
                    k++,q--;
                }
                if(nr>mx)
                    mx=nr;
                if(nr!=0)
                    v[s++]=nr;
                }
            }
        }
fout<<mx<<' ';
nr2=0;
for(i=1;i<s;i++)
    if(v[i]==mx)nr2++;
fout<<nr2;
return 0;
}