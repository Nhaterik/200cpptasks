#include <bits/stdc++.h>
using namespace std;
class Sort
{
private:
    int n, x, k = 0, cn = 0;

public:
    void solve()
    {
        cin >> n >> x;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] <= x)
                k++;
        }
        for (int i = 0; i < k; i++)
        {
            if (a[i] <= x)
                cn++;
        }
        int res = cn;
        for (int i = k; i < n; i++)
        {
            if (a[i - k] <= x)
                cn--;
            if (a[i] <= x)
                cn++;
            res = max(res, cn);
        }
        cout << k - res << endl;
    }
};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Sort x;
        x.solve();
    }

    return 0;
}