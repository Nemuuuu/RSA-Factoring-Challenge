#include <iostream>
using namespace std;
void primeFactor(long long x)
{
    long long i, j;
    for ( i = 1; i <= x; i++)
   {
    if (x % i == 0)
    {
          if (i > 2)
          {
            cout<<x<<" = "<<x / i<<" * "<<i<<endl; 
            break;
          }
    }
    }
}

int main()
{
    primeFactor(6);
    primeFactor(77);
    primeFactor(239821585064027);
    primeFactor(2497885147362973);
    return 0;
}