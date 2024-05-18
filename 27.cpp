#include <bits/stdc++.h>
using namespace std;
class Matrix
{
private:
    int n, m;
    vector<vector<int>> v1;
    vector<vector<int>> v2;

public:
    void ins()
    {
        cin >> n;
        v1 = vector<vector<int>>(n, vector<int>(n));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                cin >> v1[i][j];
        cin >> m;
        v2 = vector<vector<int>>(m, vector<int>(m));
        for (int i = 0; i < m; i++)
            for (int j = 0; j < m; j++)
                cin >> v2[i][j];
    }
    void solve()
    {
        for (int k = 0; k < n; k += m)
        {
            for (int p = 0; p < n; p += m)
            {
                for (int i = k, time1 = 0; i < n, time1 < m; i++, time1++)
                {
                    for (int j = p, time2 = 0; j < n, time2 < m; j++, time2++)
                    {
                        v1[i][j] *= v2[i - k][j - p];
                    }
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
                cout << v1[i][j] << ' ';
            cout << endl;
        }
    }
};

int main()
{
    Matrix a;
    a.ins();
    a.solve();
    return 0;
}