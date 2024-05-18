#include <bits/stdc++.h>
using namespace std;
class Count3DivisorNumber
{
private:
    long long n,cn=0;

public:
   long long isPrime(long long n)
{
    for (long long i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return 0;
    return n > 1;
}
    void solve()
    {
         cin >> n;
        for (long long i = 2; i <= sqrt(n); i++)
            if(isPrime(i) ) cn++;
            cout<<cn<<endl;
    }
};
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        Count3DivisorNumber x;
        x.solve();
    }
}