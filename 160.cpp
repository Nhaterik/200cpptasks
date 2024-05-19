#include <bits/stdc++.h>
using namespace std;
int check(string s)
{
    int MOD = 0;
    for (int i = 0; i < s.size(); i++)
        MOD = (MOD * 2 + s[i] - '0') % 5;
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
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    }
    return 0;
}
