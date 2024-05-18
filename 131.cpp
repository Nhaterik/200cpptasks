#include <bits/stdc++.h>
using namespace std;
#define MAX 1000000
int prime[MAX + 1];
void sieve()
{
    for (int i = 0; i <= MAX; i++)
        prime[i] = 1;
    prime[0] = 0;
    prime[1] = 0;
    for (int i = 2; i * i <= MAX; i++)
    {
        if (prime[i])
        {
            for (int j = i * i; j <= MAX; j += i)
                prime[j] = 0;
        }
    }
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
        for (int i = 2; i <= MAX / 2; i++)
        {
            if (prime[i] && prime[n - i])
            {
                if (n - i > 0)
                {
                    cout << i << " " << n - i << endl;
                }
                break;
            }
        }
    }

    return 0;
}