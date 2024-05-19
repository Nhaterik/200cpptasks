#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        unordered_map<int, int> ump;
        int a[n], ok = 1, res = -1;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            ump[a[i]]++;
            if (ump[a[i]] > 1 && ok)
            {
                ok = 0;
                res = a[i];
            }
        }
        cout << res << endl;
    }
    return 0;
}
