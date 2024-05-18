#include <bits/stdc++.h>
using namespace std;
int check(long long n)
{
    int cl = 0, cc = 0;
    while (n)

    {
        if ((n % 10) % 2)
            cl++;
        else
            cc++;
        n /= 10;
    }
    return cl == cc;
}

int main()
{
    int n, cn = 0;
    cin >> n;
    long long l = (long long)pow(10, n - 1);
    long long p = (long long)pow(10, n);
    for (long long i = l; i < p; i++)
    {
        if (check(i))
        {
            cout << i << " ";
            cn++;
        }
        if (cn == 10)
        {
            cn = 0;
            cout << endl;
        }
    }
    return 0;
}
