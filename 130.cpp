// C++ Program to find largest prime
// factor of number
#include <bits/stdc++.h>
using namespace std;
int isPrime(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
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
        int n;
        cin >> n;
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (isPrime(i))
                cout << i * i << " ";
        }
        cout << endl;
    }
}