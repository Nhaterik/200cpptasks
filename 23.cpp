#include <bits/stdc++.h>
using namespace std;
int n, m;
class MximumSquare
{
public:
    int solve(vector<vector<int>> &v)
    {

        for (int j = 0; j < m; j++)
        {

            for (int i = 1; i < n; i++)
            {
                v[i][j] = (v[i][j] == 0) ? 0 : v[i - 1][j] + 1;
            }
        }
        for (int i = 0; i < n; i++)
            sort(v[i].begin(), v[i].end(), greater<int>());

        int res = -1;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
                res = max(res, (j + 1) * v[i][j]);
        }
        return res;
    }
};
int main()
{
    long long t;
    cin >> t;
    MximumSquare x;
    while (t--)
    {
        cin >> n >> m;
        vector<vector<int>> v(n, vector<int>(m));

        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> v[i][j];
        cout << x.solve(v) << endl;
    }
}