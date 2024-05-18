#include <bits/stdc++.h>
using namespace std;
int check(string s)
{
    for (int i = 1; i < s.size(); i++)
    {
        if (abs(s[i] - s[i - 1]) != 1)
            return 0;
    }
    return 1;
}
int main()
{
    int test;
    cin >> test;
    while (test--)

    {
        string s;
        cin >> s;
        if (check(s))
            cout << "YES\n";
        else
            cout << "NO\n";
        cout << endl;
    }

    return 0;
}
