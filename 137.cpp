#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int &x : a)
            cin >> x;
        sort(a, a + n);
        int mn = 1000;
        for (int i = 1; i < n; i++)
            mn = min(a[i] - a[i - 1], mn);
        cout << mn << endl;
    }

    return 0;
}