#include <bits/stdc++.h>
using namespace std;
long long gt(int n)
{
    if (n == 0)
        return 1;
    return gt(n - 1) * n;
}
int main()
{
    int n;
    cin >> n;
    long long res = 0;
    for (int i = 1; i <= n; i++)
    {
        res += gt(i);
    }
    cout << res;
    return 0;
}
