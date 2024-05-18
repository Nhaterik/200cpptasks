#include <bits/stdc++.h>
using namespace std;
class Sub
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
        vector<int> v2 = v;
        sort(v.begin(), v.end());
        for (int i = 0; i < n; i++)
        {
            if (v[i] != v2[i])
            {
                cout << i + 1 << ' ';
                break;
            }
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (v[i] != v2[i])
            {
                cout << i + 1 << endl;
                break;
            }
        }
    }
};
int main()
{
    int t;
    cin >> t;
    Sub x;
    while (t--)
    {
        x.input();
        x.solve();
    }
    return 0;
}