#include <fstream>

using namespace std;
ifstream f("triunghi.in");
ofstream g("triunghi.out");
int n,c,x;
int main()
{
    f>>c;
    if(c==1)
    {
        f>>n;
        g<<n*(n+1)*(2*n+1)/6;
    }
    else if(c==2)
    {
        f>>x;
        int ok=1;
        n=1;
        while(ok)
        {
            if(n*(n+1)*(2*n+1)/6>=x)ok=0;
            if(ok)n++;
        }
        g<<n;
    }
    return 0;
}
