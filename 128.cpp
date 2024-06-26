// C++ Program to find largest prime
// factor of number
#include <bits/stdc++.h>
using namespace std;

int check(long long n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return 0;
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
        for (long long i = 2; i <= n; i++)
            if (check(i))
                cout << i << " ";
        cout << endl;
    }
}