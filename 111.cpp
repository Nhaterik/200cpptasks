#include <bits/stdc++.h>
using namespace std;
int check(long long n)
{
    if (n % 10 != 6)
        return 0;
    n /= 10;
    if (n % 10 != 8)
        return 0;
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
        if (check(n)) cout<<1<<endl;
        else cout<<0<<endl;
    }

    return 0;
}
