#include <bits/stdc++.h>
using namespace std;
class Differ
{
private:
    string s1, s2;

public:
    string diff(string x, string y)
    {
        if (x.size() < y.size() || x.size() == y.size() && x < y)
            swap(x, y);
        int l1 = x.size(), l2 = y.size(), carry = 0;
        y = string(l1 - l2, '0') + y;
        for (int i = l1 - 1; i >= 0; i--)
        {
            int d = x[i] - y[i] - carry;
            if (d < 0)
            {
                d += 10;

                carry = 1;
            }
            else
            {

                carry = 0;
            }
            x[i] = (d % 10) + '0';
        }

        return x;
    }
    void solve()
    {
        cin >> s1 >> s2;
        cout << diff(s1, s2) << endl;
    }
};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Differ x;
        x.solve();
    }
    return 0;
}