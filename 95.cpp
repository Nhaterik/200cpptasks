#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, res = 0;
        cin >> n;
        vector<int> v(n);
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]] = 1;
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                if (v[i] > v[j])
                {
                    mp[v[i]] = max(mp[v[j]] + 1, mp[v[i]]);
                    res = max(res, mp[v[i]]);
                }
            }
        }
        cout << res << endl;
    }
}