#include <bits/stdc++.h>
using namespace std;
class Array
{
private:
    int n, m;
    set<int> a, b;

public:
    void input()
    {
        cin >> n >> m;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a.insert(x);
        }
        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            b.insert(x);
        }
    }
    void solve()
    {
        set<int> res1 = b, res2;
        for (auto it : a)
        {
            res1.insert(it);
            if (b.find(it) != b.end())
                res2.insert(it);
        }
        for (auto it : res1)
            cout << it << ' ';
        cout << endl;
        for (auto it : res2)
            cout << it << ' ';
        cout << endl;
    }
};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Array x;
        x.input();
        x.solve();
    }
    return 0;
}