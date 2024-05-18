#include <bits/stdc++.h>
using namespace std;
int check(long long n)
{
    long long ori = n;
    long long res = 0;
    while (n != 0)

    {
        res = res * 10 + n % 10;
        n /= 10;
    }
    return ori == res;
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        long long n;
        cin >> n;
        if (check(n))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
