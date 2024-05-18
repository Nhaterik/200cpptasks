#include <bits/stdc++.h>
using namespace std;
int check(long long n)
{
    while (n != 0)

    {
        int remainder = n % 10;
        if (remainder != 0 && remainder != 6 && remainder != 8)
            return 0;
        else
        {
            n /= 10;
        }
    }
    return 1;
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
