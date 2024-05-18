#include <bits/stdc++.h>
using namespace std;
void solve(int n)
{
    int ok = 0;
    for (int i = 2; i * i <= n; i++)
    {
        int cn = 0;
        while (n % i == 0)
        {
            cn++;
            ok = 1;
            n /= i;
        }
        if (ok)
        {
            cout << i << " " << cn << endl;
            ok = 0;
        }
    }
    if (n > 1)
        cout << n << " " << 1 << endl;
}
int main()
{

    int n;
    cin >> n;
    solve(n);

    return 0;
}
