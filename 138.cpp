#include <bits/stdc++.h>
using namespace std;
int cn[1000002];
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        memset(cn, 0, sizeof(cn));

        int n;
        cin >> n;
        int a[n];
        for (int &x : a)
        {
            cin >> x;
            if (x > 0)
                cn[x] = 1;
        }
        for (int i = 1; i < 1000002; i++)
        {
            if (cn[i] == 0)
            {
                cout << i << endl;
                break;
            }
        }
    }

    return 0;
}