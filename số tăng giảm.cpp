#include <bits/stdc++.h>
using namespace std;
#define faster()                  \
    ;                             \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
class SoTangGiam
{
private:
    int n;

public:
    bool checkInc(int n)
    {
        int digit = n % 10;
        n /= 10;
        while (n % 10 < digit)
        {
            digit = n % 10;
            n /= 10;
        }
        return n == 0;
    }
    bool checkDec(int n)
    {
        int digit = n % 10;
        n /= 10;
        while (n % 10 > digit)
        {
            digit = n % 10;
            n /= 10;
        }
        return n == 0;
    }
    bool checkPrime(int n)

    {
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
                return false;
        }
        return n > 1;
    }
    void solve()
    {
        cin >> n;
        int cn = 0;
        int p = pow(10, n - 1), q = pow(10, n) - 1;
        for (int i = p; i <= q; i++)
        {
            if (checkPrime(i) && (checkInc(i) || checkDec(i)))
                cn++;
        }
        cout << cn << endl;
    }
};
int main()
{
    int t;
    cin >> t;
    faster();
    while (t--)
    {
        SoTangGiam x;
        x.solve();
    }
}