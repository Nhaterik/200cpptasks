#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    map<string, int> mp;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        s = s + '*';
        int cn = 1;
        for (int i = 0; i < s.size() - 1; i++)
        {
            if (s[i] == s[i + 1])
                cn++;
            else
            {
                cout << s[i] << cn;
                cn = 1;
            }
        }
        cout << endl;
    }
    return 0;
}