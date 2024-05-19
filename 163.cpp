#include <bits/stdc++.h>
using namespace std;
int solve(string s)
{
    int res = 0;
    for (int i = 0; i < s.size() - 1; i++)
    {

        for (int j = i + 1; j < s.size(); j++)
        {
            if (s[i] == s[j])
                res++;
        }
    }
    return res + s.size();
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        cout << solve(s) << endl;
    }
    return 0;
}
