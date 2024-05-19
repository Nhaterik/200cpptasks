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
        unordered_set<long long> us;
        for (int i = 0; i < n; i++)
        {
            long long x;
            cin >> x;
            us.insert(x);
        }
        for (int i = 0; i < n; i++)
        {
            if (us.count(i))
                cout << i << " ";
            else
                cout << -1 << " ";
        }
        cout << endl;
    }

    return 0;
}
