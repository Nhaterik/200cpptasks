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
        long long a[n];
        int cn = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] != 0)
            {
                cn++;
                cout << a[i] << " ";
            }
        }
        n -= cn;
        for (int i = 0; i < n; i++)
            cout << 0 << " ";
        cout << endl;
    }
    return 0;
}
