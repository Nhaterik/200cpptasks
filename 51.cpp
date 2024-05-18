#include <bits/stdc++.h>
using namespace std;
class Sort
{
private:
    int n, x;
    vector<int> v;
    map<int, vector<int>> mp;

public:
    void input()
    {
        cin >> n >> x;
        v = vector<int>(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
    }
    void solve()
    {
        for (int i = 0; i < n; i++)
            mp[abs(v[i] - x)].push_back(v[i]);
        for (auto it : mp)
        {
            for (auto it1 : it.second)
                cout << it1 << ' ';
        }
        cout << endl;
    }
};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Sort x;
        x.input();
        x.solve();
    }

    return 0;
}