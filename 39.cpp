#include <bits/stdc++.h>
using namespace std;
class Div
{
private:
    string s;
    long long b, m;

public:
    long long solve1(string s, long long m)
    {
        long long r = 0;
        for (int i = 0; i < s.size(); i++)
            r = (r * 10 + s[i] - '0') % m;
        return r;
    }
    long long bipow(long long a, long long b, long long c)
    {
        long long res = 1;
        while (b)
        {
            if (b % 2)
            {
                res *= a;
                res %= c;
            }
            a *= a;
            a %= c;
            b /= 2;
        }
        return res;
    }
    void solve()
    {
        cin >> s >> b >> m;
        long long a = solve1(s, m);
        cout << bipow(a, b, m) << endl;
    }
};
int main()
{
    int t;
    cin >> t;
    Div x;
    while (t--)
    {
        x.solve();
    }

    return 0;
}