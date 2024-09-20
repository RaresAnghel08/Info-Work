#include <bits/stdc++.h>

using namespace std;
bool voc(char c)
{
    return c=='a'||c=='e'||c=='i'||c=='o'||c=='u';
}
bool cons(char c)
{
    return c>='a'&&c<='z'&&!voc(c);
}
int main()
{
    string s;
    getline(cin,s);
    int nr=0;
    for(int i=1;i<=s.length()-1;i++)
    {
        if(voc(s[i]))
        {
            if(cons(s[i-1])&&cons(s[i+1])) nr++;
            
        }
    }
    cout<<nr;
    return 0;
}