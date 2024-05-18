#include <bits/stdc++.h>
using namespace std;
class SamePrime
{
private:
    int x,cn=0;

public:
  int isPrime(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return 0;
    return n>1;
}
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
    void solve()
    {
         cin >> x;
        for (int i = 1; i <= x; i++)
            if (gcd(i, x) == 1)
                cn++;
        if (isPrime(cn))
            cout <<1; else cout<<0;
            cout<<endl;
    }
};
int main()
{
    long long t;
    cin >> t;
     while (t--)
    {
    SamePrime x;
        x.solve();
    }
}