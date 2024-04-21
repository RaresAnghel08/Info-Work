#include <bits/stdc++.h>

using namespace std;
int n,m,i,j,a[15][15],k,v[10];;
int main()
{
  cin>>n;
  for(i=1;i<=n;i++)
    { 
        for(j=1;j<=n;j++) 
        {
            if(i==j||i+j==n+1)a[i][j]=0;
            else if(i>j&&i+j>n+1) a[i][j]=2;
            else if(i<j&&i+j<n+1) a[i][j]=1;
            else a[i][j]=3;
        }
    }
  for(i=1; i<=n; i++)
      {
          for(j=1; j<=n; j++)
          {
              cout<<a[i][j]<<' ';
          }
          cout<<'\n';
      }
  return 0;
}