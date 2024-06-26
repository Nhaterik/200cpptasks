#include <bits/stdc++.h>
#define endl "\n"
#define faster()                  \
    ;                             \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

vector<bool> prime(1000001, 1);

void sieve()
{
    prime[0] = prime[1] = 0;
    for (ll i = 2; i <= 1000000; ++i)
        if (prime[i])
            for (ll j = i * i; j <= 1000000; j += i)
                prime[j] = 0;
}

int main()
{
    faster();
    sieve();
    int l, r;
    cin >> l >> r;
    if (l > r)
        swap(l, r);
    for (int i = l; i <= r; ++i)
        if (prime[i])
            cout << i << " ";
    return 0;
}