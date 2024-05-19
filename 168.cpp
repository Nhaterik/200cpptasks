
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
        for (int &x : a)
            cin >> x;
        sort(a, a + n, greater<int>());
        int div = n / 2;
        for (int i = 0; i < div; i++)
        {
            cout << a[i] << " ";
            cout << a[n - i - 1] << " ";
        }
        if (n % 2)
            cout << a[div];
        cout << endl;
    }
}
