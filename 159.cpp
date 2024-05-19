#include <bits/stdc++.h>
using namespace std;
int check(string s)
{
    int MOD = 0;
    for (int i = 0; i < s.size(); i++)
        MOD = (MOD * 10 + s[i] - '0') % 11;
    return MOD;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (check(s) != 0)
            cout << 0 << endl;
        else
            cout << 1 << endl;
    }
    return 0;
}
