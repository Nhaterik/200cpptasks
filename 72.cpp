#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<string, string> a, pair<string, string> b)
{
    return a.second > b.second;
}
int main()
{
    int t;
    cin >> t;
    vector<pair<string, string>> v;
    while (t--)
    {
        string name, date;
        cin >> name >> date;
        string year = date.substr(6), month = date.substr(3, 2), day = date.substr(0, 2);
        date = year + month + day;
        v.push_back({name, date});
    }
    sort(v.begin(), v.end(), cmp);
    cout << v[0].first << '\n'
         << v[v.size() - 1].first;
}