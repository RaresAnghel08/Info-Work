#include <bits/stdc++.h>

using namespace std;
int f[5],mx;
int main()
{
    string s;
    getline(cin,s);
    int n;
    n=s.length();
    for(int i=0;i<n;i++)
    {
        s[i]=tolower(s[i]);
        if(s[i]=='a') f[0]++;
        else if(s[i]=='e') f[1]++;
        else if(s[i]=='i') f[2]++;
        else if(s[i]=='o') f[3]++;
        else if(s[i]=='u') f[4]++;
    }
    for(int i=0;i<=4;i++)
        if(f[i]>mx) mx=f[i];
    for(int i=0;i<=4;i++)
        if(mx==f[i])
        {
            if(i==0) {cout<<'A';return 0;}
            else if(i==1) {cout<<'E';return 0;}
            else if(i==2) {cout<<'I';return 0;}
            else if(i==3) {cout<<"O";return 0;}
            else if (i==4) {cout<<'U';return 0;}
        }
    return 0;
}