#include <bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
long long s_n(long long n)
{
    long long ans = 1;
    for (int i = 2; i <= n; i++)
        ans = (ans * i) / (gcd(ans, i));
    return ans;
}
int main()
{
    long long test;
    cin >> test;
    while (test--)

    {
        int n;
        cin >> n;

        cout << s_n(n) << endl;
    }

    return 0;
}
