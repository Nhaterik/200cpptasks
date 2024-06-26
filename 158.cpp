#include <bits/stdc++.h>
using namespace std;
void solve(int m, int s)
{
    int small[m], big[m];
    memset(small, 0, sizeof(small));
    memset(big, 0, sizeof(big));
    if (s == 0 && m > 1 || 9 * m < s)
        cout << "-1 -1";
    else
    {
        int tmp = s - 1;
        for (int i = 0; i < m; i++)
        {
            if (s >= 9)
                big[i] = 9, s -= 9;
            else if (s != 0)
                big[i] = s, s = 0;
            else
                break;
        }

        for (int i = m - 1; i > 0; i--)
        {
            if (tmp >= 9)
                small[i] = 9, tmp -= 9;
            else if (tmp != 0)
                small[i] = tmp, tmp = 0;
            else
                break;
        }
        small[0] = tmp + 1;
        for (int i = 0; i < m; i++)
            cout << small[i];
        cout << " ";
        for (int i = 0; i < m; i++)
            cout << big[i];
    }
}

int main()
{

    int m, s;
    cin >> m >> s;
    solve(m, s);
}