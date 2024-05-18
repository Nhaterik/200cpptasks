#include <bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
int main()
{
    long long test;
    cin >> test;
    while (test--)

    {
        long long a, b;
        cin >> a >> b;
        cout << (long long)(a * b) / gcd(a, b) << " " << gcd(a, b) << endl;
    }

    return 0;
}