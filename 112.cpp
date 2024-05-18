#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)

    {
        int n, ok = 0;
        cin >> n;
        for (int i = 2; i * i <= n; i++)
        {
            int cn = 0;
            while (n % i == 0)
            {
                n /= i;
                cn++;
                ok = 1;
            }
            if (ok)
            {
                cout << i << " " << cn << " ";
                ok = 0;
            }
        }
        if (n > 1)
            cout << n << " " << 1;
        cout << endl;
    }

    return 0;
}
