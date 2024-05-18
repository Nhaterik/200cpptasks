#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 1000001
#define mod 1000000007
class CalcMuti
{
private:
       ll n, x;

public:
  ll bipow(ll a, ll b)
{
    ll res = 1;
    while (b)
    {
        if (b % 2)
        {
            res *= a;
            res %= mod;
        }
        a *= a;
        a %= mod;
        b /= 2;
    }
    return res;
}
void solve()
{
     cin >> n >> x;
        ll a[n];
        for (ll i = n - 1; i >= 0; i--)
            cin >> a[i];
        ll ans = 0;
        for (ll i = 0; i < n; i++)
        {
            ans = (ans+a[i] * bipow(x, i)) % mod;
        }
        cout << ans << endl;
}


};
int main()
{
    long long t;
    cin >> t;
    CalcMuti x;
    while (t--)
    {
        x.solve();
    }
}