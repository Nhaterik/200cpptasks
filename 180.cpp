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
        int a[n];
        for (int i = 0; i < n - 1; i++)
            cin >> a[i];
        sort(a, a + n - 1);
        for (int i = 1; i < n - 1; i++)
        {
            if ((a[i] - a[i - 1]) > 1)
            {
                cout << a[i - 1] + 1 << endl;
                break;
            }
        }
    }

    return 0;
}