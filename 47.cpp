#include <bits/stdc++.h>
using namespace std;
class handleFile
{
private:
    string s;

public:
    void solve()
    {

        int Up = 1;
        vector<string> v;
        while (cin >> s)
        {
            for (int i = 0; i < s.size(); i++)
                s[i] = tolower(s[i]);
            if (Up)
            {
                Up = 0;
                s[0] = toupper(s[0]);
            }
            v.push_back(s);
            if (s[s.size() - 1] == '.' || s[s.size() - 1] == '!' || s[s.size() - 1] == '?')
            {
                v[v.size() - 1].erase(v[v.size() - 1].size() - 1, 1);
                v.push_back("\n");
                Up = 1;
            }
            else
                v.push_back(" ");
        }
        for (int i = 0; i < v.size(); i++)
            cout << v[i];
    }
};
int main()
{
    int t;
    cin >> t;
    handleFile x;
    while (t--)
    {
        x.solve();
    }
    return 0;
}