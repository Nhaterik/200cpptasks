#include <bits/stdc++.h>

using namespace std;
int check(string s)
{
    if (s.size() == 1)
        return 0;
    string os = s;
    reverse(s.begin(), s.end());
    return os == s;
}
bool cmp(pair<string, int> a, pair<string, int> b)
{
    if (a.first.size() != b.first.size())
        return a.first.size() > b.first.size();
    else
        return a.first > b.first;
}
int main()
{
    string s;
    map<string, int> mp;
    while (cin >> s)
    {
        if (check(s))
            mp[s]++;
    }
    vector<pair<string, int>> v;
    for (auto it : mp)
    {
        v.push_back(it);
    }
    sort(v.begin(), v.end(), cmp);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].first << " " << v[i].second << endl;
    }

    return 0;
}