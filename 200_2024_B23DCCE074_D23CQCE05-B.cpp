
// Input:

// 2
// 3
// 16 16 16
// 2
// 2 3

// Output:

// 7
// 4
#include <bits/stdc++.h>
using namespace std;
class MaximumSumandContinue
{
public:
    void solve()
    {
        long long n, res = 0, mx = -1;
        cin >> n;
        vector<long long> v(n);
        for (long long i = 0; i < n; i++)
        {
            cin >> v[i];
            res += v[i];
            mx = max(mx, res);
            if (res < 0)
                res = 0;
        }
        cout << mx << endl;
    }
};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        MaximumSumandContinue x;
        x.solve();
    }

    return 0;
}