#include <bits/stdc++.h>
using namespace std;
#define ll long long

class RotatingMatrix
{
private:
    int n, m;

public:
    void solve()
    {
        cin >> n >> m;
        vector<vector<int>> v(n, vector<int>(m));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> v[i][j];
        int h1 = 0, h2 = n - 1, c1 = 0, c2 = m - 1;
        while (h1 <= h2 && c1 <= c2)
        {
            int pre = v[h1 + 1][c1];
            if (h1 == h2 && c1 == c2)
                break;
            for (int i = c1; i <= c2; i++)
            {
                int cur = pre;
                pre = v[h1][i];
                v[h1][i] = cur;
            }
            h1++;
            for (int i = h1; i <= h2; i++)
            {
                int cur = pre;
                pre = v[i][c2];
                v[i][c2] = cur;
            }
            c2--;
            if (h1 <= h2)
            {
                for (int i = c2; i >= c1; i--)
                {
                    int cur = pre;
                    pre = v[h2][i];
                    v[h2][i] = cur;
                }
                h2--;
            }
            if (c1 <= c2)
            {
                for (int i = h2; i >= h1; i--)
                {
                    int cur = pre;
                    pre = v[i][c1];
                    v[i][c1] = cur;
                }
                c1++;
            }
        }
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cout << v[i][j] << ' ';
        cout << endl;
    }
};
int main()
{
    long long t;
    cin >> t;
    RotatingMatrix x;
    while (t--)
    {
        x.solve();
    }
}