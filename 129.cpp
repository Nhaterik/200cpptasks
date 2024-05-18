// C++ Program to find largest prime
// factor of number
#include <bits/stdc++.h>
using namespace std;

int check(long long n, long long k)
{
    int cn = 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            while (n % i == 0)
            {
                cn++;

                if (cn == k)
                    return i;
                n /= i;
            }
        }
    }
    if (cn + 1 == k && n > 1)
        return n;
    return -1;
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        long long n, k;
        cin >> n >> k;
        cout << check(n, k) << endl;
    }
}