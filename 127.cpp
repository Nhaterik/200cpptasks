// coded by Pham Van Nhat fb:Nhat Erik (Speed)
#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll divmx(ll n)
{
    ll mx = -1;
    for (ll i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            mx = max(mx, i);
            while (n % i == 0)
                n /= i;
        }
    }
    if (n > 1)
        mx = max(mx, n);
    return mx;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        cout << divmx(n) << endl;
    }

    return 0;
}