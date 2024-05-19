#include <bits/stdc++.h>
using namespace std;

int bs(int a[], int x, int l, int r)
{
    int res = -1;
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (a[m] == x)
        {
            res = m;
            break;
        }
        else if (a[m] < x)
            l = m + 1;
        else
            r = m - 1;
    }
    return res;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        int l = 0, r = n - 1, res = bs(a, x, l, r);
        if (res != -1)
            cout << 1 << endl;
        else
            cout << -1 << endl;
    }

    return 0;
}