#include <bits/stdc++.h>
using namespace std;
#define HAHA 1000000007

void div(map<long long, long long> &mp, long long x, long long n)
{
    for (long long i = 2; i <= sqrt(n); i++)
    {
        while (n % i == 0)
        {
            mp[i] += x;
            n /= i;
        }
    }
    if (n != 1)
        mp[n] += x;
}
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, r, res = 1;
        cin >> n >> r;
        map<long long, long long> mp;
        for (long long i = n - r + 1; i <= n; i++)
            div(mp, 1, i);
        for (long long i = 2; i <= r; i++)
            div(mp, -1, i);
        for (auto [key, val] : mp)
            while (val--)
                res = (res * key) % HAHA;
        cout << res << endl;
    }
}