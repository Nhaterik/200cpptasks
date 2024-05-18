#include <bits/stdc++.h>
#define ll long long
using namespace std;
// Input

// Output

// 3

// 2  3  5  4

// 4  5  6  3

// 3  5  7  2

// 1020

// 120

// -1
class DivisibleFor3Int
{
private:
    ll x, y, z, n;

public:
    ll gcd(ll a, ll b)
    {
        if (b == 0)
            return a;
        return gcd(b, a % b);
    }
    int solve()
    {
        cin >> x >> y >> z >> n;
        ll sublcm = (x * y) / gcd(x, y);
        ll lcm = (sublcm * z) / gcd(sublcm, z);

        ll number = (ll)pow(10, n - 1);
        ll remainder = number % lcm;
        if (remainder == 0)
            return number;
        else
            number += lcm - remainder;
        if (number < (ll)pow(10, n))
            return number;
        else
            return -1;
    }
};
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        DivisibleFor3Int x;
        cout << x.solve() << endl;
    }
}