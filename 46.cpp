#include <bits/stdc++.h>
using namespace std;
class Phone
{
private:
    string s;
    map<char, int> mp;

public:
    void init()
    {
        mp['A'] = 2;
        mp['B'] = 2;
        mp['C'] = 2;
        mp['D'] = 3;
        mp['F'] = 3;
        mp['E'] = 3;
        mp['G'] = 4;
        mp['H'] = 4;
        mp['I'] = 4;
        mp['J'] = 5;
        mp['K'] = 5;
        mp['L'] = 5;
        mp['M'] = 6;
        mp['N'] = 6;
        mp['O'] = 6;
        mp['P'] = 7;
        mp['S'] = 7;
        mp['Q'] = 7;
        mp['R'] = 7;
        mp['T'] = 8;
        mp['U'] = 8;
        mp['V'] = 8;
        mp['X'] = 9;
        mp['Y'] = 9;
        mp['W'] = 9;
        mp['Z'] = 9;
    }
    void input()
    {
        getline(cin, s);
    }
    bool check(string s)
    {
        string res = s;
        reverse(s.begin(), s.end());
        return res == s;
    }
    void solve()
    {
        string res = "";
        for (int i = 0; i < s.size(); i++)
            s[i] = toupper(s[i]);
        for (int i = 0; i < s.size(); i++)
            res += (mp[s[i]] + '0');
        if (check(res))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
};
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    Phone x;
    x.init();
    while (t--)
    {
        x.input();
        x.solve();
    }
    return 0;
}