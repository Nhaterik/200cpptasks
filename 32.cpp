// fb:nhaterik || NhatSpeed
#include <bits/stdc++.h>
using namespace std;

class Solve
{
private:
    string s;

public:
    string solve(string s)
    {
        int i;
        for (i = s.size() - 1; i >= 1; i--)
        {

            if (s[i] >= s[i - 1])
                continue;
            else
                break;
        }
        if (i == 0)
            return "-1";

        for (int j = s.size() - 1; j >= i; j--)
        {
            if (s[j] >= s[i - 1] || s[j] < s[i - 1] && s[j] == s[j - 1])
            {
                continue;
            }
            else
            {
                swap(s[j], s[i - 1]);
                break;
            }
        }
        return s;
    }
    void handle()
    {
        string s;
        cin >> s;
        cout << solve(s) << endl;
    }
};

int main()
{
    int t;
    cin >> t;
    Solve x;
    while (t--)
    {
        x.handle();
    }
    return 0;
}