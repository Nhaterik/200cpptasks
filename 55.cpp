#include <bits/stdc++.h>
using namespace std;
class fast
{
private:
    int n;
    vector<int> v;

public:
    void input()
    {
        cin >> n;
        v = vector<int>(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
    }
    void solve()
    {
        for (int i = 1; i < n; i++)
        {
            if (v[i] == v[i - 1])
            {
                v[i - 1] *= 2;
                v[i] = 0;
            }
        }
        int cn = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] != 0)
            {
                cout << v[i] << ' ';
                cn++;
            }
        }
        n -= cn;
        for (int i = 0; i < n; i++)
            cout << 0 << ' ';
        cout << endl;
    }
};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        fast x;
        x.input();
        x.solve();
    }

    return 0;
}