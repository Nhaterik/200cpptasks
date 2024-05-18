#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, k, x;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        cin >> k >> x;
        auto pos = lower_bound(v.begin(), v.end(), x) - v.begin();
        int l = pos - 1, r = pos + 1, run = k / 2;
        if (v[pos] != x)
            r--;
        for (int i = l - run + 1; i < l + 1; i++)
            cout << v[i] << " ";
        for (int i = r; i < r + run; i++)
            cout << v[i] << " ";
        cout << endl;
    }
    return 0;
}