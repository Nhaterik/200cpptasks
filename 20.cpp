#include <bits/stdc++.h>
using namespace std;
#define ll long long

class MatrixRotating1
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
            for (int i = c1; i <= c2; i++)
                cout << v[h1][i] << ' ';
            h1++;
            for (int i = h1; i <= h2; i++)
                cout << v[i][c2] << ' ';
            c2--;
            if (h1 <= h2)
            {
                for (int i = c2; i >= c1; i--)
                    cout << v[h2][i] << ' ';
                h2--;
            }
            if (c1 <= c2)
            {
                for (int i = h2; i >= h1; i--)
                    cout << v[i][c1] << ' ';
                c1++;
            }
        }
        cout << endl;
    }
};
int main()
{
    long long t;
    cin >> t;
    MatrixRotating1 x;
    while (t--)
    {
        x.solve();
    }
}