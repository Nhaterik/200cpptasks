#include <bits/stdc++.h>
using namespace std;
int check(long long n)
{
    if (n < 2)
        return 0;
    for (long long i = 2; i * i <= n; i++)
        if (n % i == 0)
            return 0;
    return 1;
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {

        long long a, b;
        cin >> a >> b;
        for (long long i = a; i <= b; i++)
            if (check(i))
                cout << i << " ";
        cout << endl;
    }

    return 0;
}
