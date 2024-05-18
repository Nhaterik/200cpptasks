#include <bits/stdc++.h>
using namespace std;
int check(string s, int k)
{
    if (s.size() < 26)
        return 0;
    set<char> se;
    for (int i = 0; i < s.size(); i++)
        se.insert(s[i]);
    if (se.size() + k >= 26)
        return 1;
    else
        return 0;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        string s;
        cin >> s;
        int k = 0;
        cin >> k;
        if (check(s, k))
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }
}