#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n, q;
        cin >> n >> q;
        int a[n + 1];
        a[0] = 0;
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            a[i] = a[i - 1] + x;
        }
        while (q--)
        {
            int l, r;
            cin >> l >> r;
            cout << a[r] - a[l - 1] << endl;
        }
    }

    return 0;
}