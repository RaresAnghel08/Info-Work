#include <bits/stdc++.h>

using namespace std;
bool cons(char c)
{
    return c>='b'&&c<='z'&&(c!='e'&&c!='o'&&c!='u'&&c!='i'&&c!='a');
}
int main()
{
    int nr=0;
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        if(cons(s[i])&&nr==0) nr++;
        if(!cons(s[i])&&s[i]!='i') {cout<<"NU";return 0;}
    }
    if(nr)cout<<"DA";
    else cout<<"NU";
    return 0;
}