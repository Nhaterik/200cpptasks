#include <bits/stdc++.h>
using namespace std;
class Sep
{
private:
    string s;

public:
    void input()
    {
        cin >> s;
    }
    void solve()
    {
        long long digit = 0;
        vector<char> v;
        for (int i = 0; i < s.size(); i++)
        {
            if (isdigit(s[i]))
                digit += (s[i] - '0');
            else
                v.push_back(s[i]);
        }
        sort(v.begin(), v.end());
        for (int i = 0; i < v.size(); i++)
            cout << v[i];
        cout << digit << endl;
    }
};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Sep x;
        x.input();
        x.solve();
    }

    return 0;
}