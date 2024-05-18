#include <bits/stdc++.h>
using namespace std;
class DivisibleBy2
{
private:
    int n;

public:
    int check(int n)
    {
        int cn = 0;
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                if (i % 2 == 0)
                    cn++;
                if (i != n / i)
                    if (n / i % 2 == 0)
                        cn++;
            }
        }
        if (n % 2 == 0)
            cn++;
        return cn;
    }
    void solve()
    {
        cin >> n;
        cout << check(n);
        cout << endl;
    }
};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        DivisibleBy2 x;
        x.solve();
    }
}