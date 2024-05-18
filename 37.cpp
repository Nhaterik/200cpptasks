#include <bits/stdc++.h>
using namespace std;
class Sum
{
private:
    string n1, n2;

public:
    void input()
    {
        cin >> n1 >> n2;
    }
    void solve()
    {
        if (n1.size() < n2.size())
            n1 = string(n2.size() - n1.size(), '0') + n1;
        else
            n2 = string(n1.size() - n2.size(), '0') + n2;
        int carry = 0, digit = 0, len = n1.size();
        for (int i = len - 1; i >= 0; i--)
        {
            digit = (n1[i] - '0' + n2[i] - '0') + carry;
            if (digit > 9)
                carry = 1;
            else
                carry = 0;
            n1[i] = (digit % 10) + '0';
        }
        if (carry)
            cout << '1';
        for (int i = 0; i < len; i++)
            cout << n1[i];
        cout << endl;
    }
};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Sum x;
        x.input();
        x.solve();
    }

    return 0;
}