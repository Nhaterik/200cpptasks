// fb:nhaterik || NhatSpeed
#include <bits/stdc++.h>
using namespace std;

class Solve
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
        sort(s.begin(), s.end());
        int cn = 1, mx = -1, len = s.size();
        for (int i = 1; i < len; i++)
        {
            if (s[i] == s[i - 1])
                cn++;
            else
            {
                mx = max(mx, cn);
                cn = 1;
            }
        }
        mx = max(mx, cn);
        if (mx <= (len + 1) / 2)
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
        Solve x;
        x.input();
        x.solve();
    }
    return 0;
}