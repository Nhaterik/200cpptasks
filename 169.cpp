#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cin.ignore();
        set<char> se;
        string s;
        getline(cin, s);
        for (int i = 0; i < s.size(); i++)
            se.insert(s[i]);
        for (auto it : se)
        {
            if (it != ' ')
                cout << it << ' ';
        }
        cout << endl;
    }
}