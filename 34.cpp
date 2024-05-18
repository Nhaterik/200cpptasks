#include <bits/stdc++.h>
using namespace std;
class Nplate
{
private:
    string s;

public:
    void input()
    {
        cin >> s;
    }
    bool check1(string s1, string s2)
    {
        string tmp = s1 + s2;
        for (int i = 0; i < tmp.size() - 1; i++)
            if (tmp[i] >= tmp[i + 1])
                return false;
        return true;
    }
    bool check2(string s1, string s2)
    {
        if (s1[0] != s1[1] || s1[0] != s1[2])
            return false;
        if (s2[0] != s2[1])
            return false;
        return true;
    }
    bool check3(string s1, string s2)
    {
        string tmp = s1 + s2;
        for (int i = 0; i < tmp.size(); i++)
            if (tmp[i] != '6' && tmp[i] != '8')
                return false;
        return true;
    }
    void solve()
    {
        string s1 = s.substr(5, 3), s2 = s.substr(9, 2);
        if (check1(s1, s2) || check2(s1, s2) || check3(s1, s2))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Nplate x;
        x.input();
        x.solve();
    }
    return 0;
}