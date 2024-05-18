#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n;
        map<int, int> mp;
        for (int i = 0; i < n; i++)

            cin >> x, mp[x]++;
        int cn = 0;
        for (auto it : mp)
            if (it.second > 1)
                cn += it.second;
        cout << cn << endl;
    }
}