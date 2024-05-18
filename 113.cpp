#include <bits/stdc++.h>
using namespace std;
int sum(int n)
{
    int s = 0;
    while (n)
    {
        s += n % 10;
        n /= 10;
    }
    return s;
}
int main()
{
    int test;
    cin >> test;
    while (test--)

    {
        int n;
        cin >> n;
        while (n >= 10)
        {
            n = sum(n);
        }
        cout << n << endl;
    }

    return 0;
}
