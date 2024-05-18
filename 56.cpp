#include <bits/stdc++.h>
using namespace std;
class fast
{
private:
    int n, k, b;
    map<int, int> mp;

public:
    void input()
    {
        cin >> n >> k >> b;
        for (int i = 0; i < n; i++)
            mp[i + 1] = 1;
        for (int i = 0; i < b; i++)
        {
            int x;
            cin >> x;
            mp[x] = -1;
        }
        int res = 0, cn = 0;
        for (int i = 0; i < k; i++)
            if (mp[i + 1] == -1)
                cn++;
        res = cn;
        for (int i = k; i < n; i++)
        {
            if (mp[i + 1] == -1)
                cn++;
            if (mp[i - k + 1] == -1)
                cn--;
            res = min(res, cn);
        }
        cout << res << endl;
    }
};
int main()
{

    fast x;
    x.input();

    return 0;
}