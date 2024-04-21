#include <fstream>

using namespace std;
ifstream f("triunghi.in");
ofstream g("triunghi.out");
long long n,c,x,poz,i;
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
        for(i=1;i<=x;i++)
        {
            if(i*i==x){poz=i;break;}
            else if((i+1)*(i+1)==x){poz=i+1;break;}
            if(i*i<x&&(i+1)*(i+1)>x) {poz=i;break;}
        }
        g<<n<<' '<<poz;
    }
    return 0;
}
