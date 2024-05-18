#include <bits/stdc++.h>
using namespace std;
class Fibo
{
private:
    long long n, ok = 0;
    long long fibo[93];

public:
    void sieve()
    {
        fibo[0] = 0;
        fibo[1] = 1;
        for (int i = 2; i < 93; i++)
            fibo[i] = fibo[i - 1] + fibo[i - 2];
    }
    void solve()
    {
        ok=0;
        cin >> n;
        for (int i = 0; i < 93; i++)
        {
            if (fibo[i] == n)
            {
                cout << "YES\n";
                ok = 1;
                break;
            }
        }
        if (!ok)
            cout << "NO\n";
    }
};
int main()
{
    long long t;
    cin >> t;
    Fibo x;
    x.sieve();
     while (t--)
    {
        x.solve();
    }
}