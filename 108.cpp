#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)

    {
        string s;
        cin >> s;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '0' && s[i + 1] == '8' && s[i + 2] == '4')
                i += 2;
            else
                cout << s[i];
        }
        cout << endl;
    }

    return 0;
}