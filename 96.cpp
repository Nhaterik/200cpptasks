#include <bits/stdc++.h>
using namespace std;
#define MAX 99999
int r[MAX] = {0}, s[MAX] = {0}, len = 1, n;
void divisition(int n, int x)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        while (n % i == 0)
        {
            s[i] += x;
            n /= i;
        }
    }
    if (n != 1)
        s[n] += x;
}
void mut(int n)
{
    len += 5;
    for (int i = 0; i < len; i++)
        r[i] *= n;
    for (int i = 0; i < len; i++)
    {
        r[i + 1] += r[i] / 10;
        r[i] %= 10;
    }
    while (len > 0 && r[len - 1] == 0)
        --len;
}
void solve(int n)
{
    for (int i = n + 2; i <= 2 * n; i++)
        divisition(i, 1);
    for (int i = 1; i <= n; i++)
        divisition(i, -1);
    r[0] = 1;
    for (int i = 2; i < MAX; i++)
        while (s[i]--)
            mut(i);
    for (int i = len - 1; i >= 0; i--)
        cout << r[i];
}
int main()
{
    cin >> n;
    solve(n + 1);
}