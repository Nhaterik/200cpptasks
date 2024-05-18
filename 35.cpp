#include <bits/stdc++.h>
using namespace std;
class fullN
{
private:
    string s;

public:
    void input()
    {
        cin >> s;
    }
    int check(string s)
    {
        set<char> se;
        if (s[0] == '0')
            return -1;
        for (int i = 0; i < s.size(); i++)
        {
            if (!isdigit(s[i]))
                return -1;
            else
                se.insert(s[i]);
        }
        return se.size();
    }
    void solve()
    {
        if (check(s) == -1)
            cout << "INVALID";
        else if (check(s) == 10)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        fullN x;
        x.input();
        x.solve();
    }
    return 0;
}