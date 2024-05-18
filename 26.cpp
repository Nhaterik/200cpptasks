#include <bits/stdc++.h>
using namespace std;
class Fra
{
public:
    void solve(int n, vector<vector<int>> matrx, vector<int> tmp)
    {
        int k = 0;

        int c1 = 0, c2 = n - 1, h2 = n - 1, h1 = 0;
        while (h1 <= h2 && c1 <= c2)
        {
            for (int i = c1; i <= c2; i++)
                matrx[h1][i] = tmp[k++];
            h1++;
            for (int i = h1; i <= h2; i++)
                matrx[i][c2] = tmp[k++];
            c2--;
            if (h1 <= h2)
            {
                for (int i = c2; i >= c1; i--)
                    matrx[h2][i] = tmp[k++];
                h2--;
            }
            if (c1 <= c2)
            {
                for (int i = h2; i >= h1; i--)
                    matrx[i][c1] = tmp[k++];
                c1++;
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << matrx[i][j] << ' ';
            }
            cout << endl;
        }
    }
};
int main()
{
    int n;
    cin >> n;
    vector<vector<int>> matrx(n, vector<int>(n));
    vector<int> tmp;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrx[i][j];
            tmp.push_back(matrx[i][j]);
        }
    }

    sort(tmp.begin(), tmp.end());
    Fra f;
    f.solve(n, matrx, tmp);

    return 0;
}