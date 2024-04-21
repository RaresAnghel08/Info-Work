#include <bits/stdc++.h>
#include <conio.h>
#include <windows.h>
using namespace std;
int a,b,s;
char ch;
int main()
{
    while(true)
    {
        //cin>>ch;
        if(_kbhit())
        {
            cout<<_kbhit();
            if(_getch()!='c') cout<<(char)_getch()<<'\n';
            else if(_getch()=='c') system("cls");
            //else _cputs("cevatext \n");
            //Wait(10000)
            //cout<<"ms \n";
        }
    }
    return 0;
}
