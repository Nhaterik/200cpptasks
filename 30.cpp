#include <bits/stdc++.h>
using namespace std;

class MaxAndMinSum
{
private:
    string s1, s2;
    vector<string> res;

public:
    long long mi(string s1, string s2)
    {
        for (int i = 0; i < s1.size(); i++)
            if (s1[i] == '6')
                s1[i] = '5';
        for (int i = 0; i < s2.size(); i++)
            if (s2[i] == '6')
                s2[i] = '5';
        long long n1 = stoll(s1);
        long long n2 = stoll(s2);
        long long s = n1 + n2;
        return s;
    }
    long long ma(string s1, string s2)
    {
        for (int i = 0; i < s1.size(); i++)
            if (s1[i] == '5')
                s1[i] = '6';
        for (int i = 0; i < s2.size(); i++)
            if (s2[i] == '5')
                s2[i] = '6';
        long long n1 = stoll(s1);
        long long n2 = stoll(s2);
        long long s = n1 + n2;
        return s;
    }
    void solve()
    {
        string s1, s2;
        cin >> s1 >> s2;
        cout << mi(s1, s2) << " " << ma(s1, s2) << endl;
    }
};

int main()
{
    int t;
    cin >> t;
    MaxAndMinSum x;
    while (t--)
    {
        x.solve();
    }
    return 0;
}