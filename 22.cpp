#include <bits/stdc++.h>
using namespace std;
class ChangeMatrix
{
private:
    int n, mx = -1;

public:
    void solve()
    {
        cin >> n;
        vector<vector<int>> v(n, vector<int>(n));
        vector<int> row(n);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> v[i][j];
                row[i] += v[i][j];
            }
            mx = max(mx, row[i]);
        }
        for (int j = 0; j < n; j++)
        {
            int sum = 0;
            for (int i = 0; i < n; i++)
            {
                sum += v[i][j];
            }
            mx = max(mx, sum);
        }
        int res = 0;
        for (int i = 0; i < n; i++)
        {

            res += (mx - row[i]);
        }
        cout << res << endl;
    }
};
int main()
{
    long long t;
    cin >> t;
    ChangeMatrix x;
    while (t--)
    {
        x.solve();
    }
}