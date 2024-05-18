#include <bits/stdc++.h>
using namespace std;
class For2
{
private:
    string s;

public:
    void input()
    {
        cin >> s;
    }
    void solve()
    {
        while (s.size() != 1)
        {
            int sum = 0;
            for (int i = 0; i < s.size(); i++)
            {
                sum += (s[i] - '0');
            }
            s = to_string(sum);
        }
        if (s == "9")
            cout << '1';
        else
            cout << '0';
        cout << endl;
    }
};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        For2 x;
        x.input();
        x.solve();
    }
    return 0;
}