#include <bits/stdc++.h>
using namespace std;

long long q;
long long mod(long long n, long long k)
{
    if (k == 0)
        return 0;
    long long tmp = mod(n, k / 2);
    tmp = (tmp + tmp) % q;
    if (k % 2)
        tmp += n;
    return tmp % q;
}
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k >> q;

        cout << mod(n, k) << endl;
    }
    return 0;
}