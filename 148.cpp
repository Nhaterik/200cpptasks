#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, cn = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int cntmp = 0;
        for (int j = 0; j < 3; j++)
        {
            int x;
            cin >> x;
            if (x)
                cntmp++;
            if (cntmp > 1)
            {
                cn++;
                cntmp = 0;
            }
        }
    }
    cout << cn << endl;

    return 0;
}
