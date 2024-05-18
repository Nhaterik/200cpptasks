#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, ok = 0;
        cin >> n;
        ll a[n];
        for (ll &x : a)
        {
            cin >> x;
            x = x * x;
        }
        sort(a, a + n);
        for (int i = n - 1; i >= 2; i--)
        {
            int l = 0, r = i - 1;

            while (l < r && r != i)
            {
                if (a[i] == a[l] + a[r])
                {
                    ok = 1;
                    break;
                }
                (a[i] > a[l] + a[r]) ? l++ : r--;
            }
            if (ok)
                break;
        }
        if (ok)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}