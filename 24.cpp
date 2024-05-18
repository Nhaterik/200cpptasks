#include <bits/stdc++.h>
using namespace std;
int n, m;
class ChangeArray
{
private:
    int n;

public:
    int merge(int a[])
    {
        int l = 0, r = n - 1, cn = 0;
        while (l <= r)
        {
            if (a[l] == a[r])
                l++, r--;
            else if (a[l] < a[r])
                l++, a[l] += a[l - 1], cn++;
            else
                r--, a[r] += a[r + 1], cn++;
        }
        return cn;
    }
    void solve()
    {
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        cout << merge(a) << endl;
    }
};
int main()
{
    long long t;
    cin >> t;
    ChangeArray x;
    while (t--)
    {
        x.solve();
    }
}