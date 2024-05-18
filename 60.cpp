#include <bits/stdc++.h>
using namespace std;
class maxNumber
{
private:
    int n, x;

public:
    void input()
    {
        cin >> n >> x;
        vector<int> v;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x] = 1;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        int ok = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (mp[v[i] + x])
            {
                cout << 1 << endl;
                ok = 1;
                break;
            }
        }
        if (!ok)
            cout << -1 << endl;
    }
};
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        maxNumber x;
        x.input();
    }

    return 0;
}