#include <bits/stdc++.h>
using namespace std;
class Email
{
private:
    string s;
    map<string, int> mp;

public:
    void input()
    {
        getline(cin, s);
    }
    void solve()
    {
        vector<string> v;
        string word;
        stringstream ss(s);
        while (ss >> word)
        {
            for (int i = 0; i < word.size(); i++)
                word[i] = tolower(word[i]);
            v.push_back(word);
        }
        string res = v[v.size() - 1];
        for (int i = 0; i < v.size() - 1; i++)
            res += v[i][0];
        mp[res]++;
        cout << res;
        if (mp[res] > 1)
            cout << mp[res];
        cout << "@ptit.edu.vn" << endl;
    }
};
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    Email x;
    while (t--)
    {
        x.input();
        x.solve();
    }
    return 0;
}