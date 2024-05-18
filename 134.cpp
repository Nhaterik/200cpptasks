#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        long long k;
        cin >> n >> k;
        long long sum = 0;
        for (int i = 1; i <= n; i++)
        {
            sum += i % k;
        }
        cout << sum << endl;
    }

    return 0;
}