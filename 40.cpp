#include <bits/stdc++.h>
using namespace std;
class Sstring
{
private:
    string s1;

public:
    void input()
    {
        cin >> s1;
    }
    void solve()
    {
        string n = "";
        int res = 0;
        for (int i = 0; i < s1.size(); i++)
        {
            if (isdigit(s1[i]))
                n += s1[i];
            else if (n != "")
            {
                res += stoi(n);
                n = "";
            }
        }
        if (n != "")
            res += stoi(n);
        cout << res << endl;
    }
};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Sstring x;
        x.input();
        x.solve();
    }

    return 0;
}