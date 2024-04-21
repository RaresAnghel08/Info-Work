#include <bits/stdc++.h>

using namespace std;
int b,c;
int main()
{
    b=3;
    while(b>0)
    {
        c=b%3;
        if(c==1)cout<<'*';
        else if(c==2){cout<<"!*";}
        b--;
        }
    return 0;
}