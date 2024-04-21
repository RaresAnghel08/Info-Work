#include <iostream>
using namespace std;

int v[1000], n, i;

int Constant()
{
   for (i = 1; i < n; ++i)
      if (v[0] != v[i])
         return 0;
   return 1;
}

int StrCresc()
{
   for (i = 1; i < n; ++i)
      if (!(v[i-1] < v[i]))
         return 0;
   return 1;
}

int Cresc()
{
   for (i = 1; i < n; ++i)
      if (!(v[i-1] <= v[i]))
         return 0;
   return 1;
}

int StrDescr()
{
   for (i = 1; i < n; ++i)
      if (!(v[i-1] > v[i]))
         return 0;
   return 1;
}

int Descr()
{
   for (i = 1; i < n; ++i)
      if (!(v[i-1] >= v[i]))
         return 0;
   return 1;
}

int main()
{
   cin >> n;
   for (i = 0; i < n; ++i)
      cin >> v[i];

   if (Constant())  cout << "sir constant";
   else if (StrCresc())  cout << "sir strict crescator";
   else if (Cresc())  cout << "sir crescator";
   else if (StrDescr())  cout << "sir strict descrescator";
   else if (Descr())  cout << "sir descrescator";
   else  cout << "sir neordonat";

   return 0;
}