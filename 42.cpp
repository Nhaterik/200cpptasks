#include <bits/stdc++.h>
using namespace std;
class Findss
{
private:
    string s1;
    int k, dp[1001][1001];

public:
    void input()
    {
        cin >> s1 >> k;
    }
    void solve()
    {
        for (int i = 0; i < 1001; i++)
        {
            for (int j = 0; j < 1001; j++)
                dp[i][j] = -1;
        }
        int len = s1.size();
        for (int i = 0; i < len; i++)
        {
            unordered_set<char> s;
            for (int j = i; j < len; j++)
            {
                s.insert(s1[j]);
                dp[i][j] = s.size();
            }
        }
        int res = 0;
        for (int i = 0; i < len; i++)
        {
            for (int j = i; j < len; j++)
            {
                if (dp[i][j] == k)
                    res++;
            }
        }
        cout << res << endl;
    }
};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Findss x;
        x.input();
        x.solve();
    }

    return 0;
}