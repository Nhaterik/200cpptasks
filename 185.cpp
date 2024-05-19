
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k, cn = 0;
        cin >> n >> k;
        int a[n];
        for (int &x : a)
        {
            cin >> x;
            if (k == x)
                cn++;
        }
        if (cn != 0)
            cout << cn;
        else
            cout << -1;
        cout << endl;
    }

    return 0;
}