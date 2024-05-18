#include <bits/stdc++.h>
using namespace std;
#define MAX 1000000
long long fibo[93];
void sieve()
{
    fibo[0] = 0;
    fibo[1] = 1;
    fibo[2] = 1;
    for (int i = 3; i < 93; i++)
        fibo[i] = fibo[i - 1] + fibo[i - 2];
}
int main()
{
    int test;
    cin >> test;
    sieve();
    while (test--)
    {

        int n;
        cin >> n;

        cout << fibo[n] << endl;
    }

    return 0;
}