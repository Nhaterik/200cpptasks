#include <bits/stdc++.h>
using namespace std;
struct SinhVien
{
    string ma, ten, lop, email, cty;
    int stt;
};
bool cmp(SinhVien a, SinhVien b)
{
    return a.ma < b.ma;
}
int main()
{
    map<string, vector<SinhVien>> mp;
    int n;
    cin >> n;
    SinhVien list[n];
    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        list[i].stt = i + 1;
        getline(cin, list[i].ma);
        getline(cin, list[i].ten);
        getline(cin, list[i].lop);
        getline(cin, list[i].email);
        cin >> list[i].cty;
        mp[list[i].cty].push_back(list[i]);
    }

    int q;
    cin >> q;
    string place;
    for (int i = 0; i < q; i++)
    {
        cin >> place;

        sort(mp[place].begin(), mp[place].end(), cmp);
        int len = mp[place].size();

        for (int i = 0; i < len; i++)
            cout << mp[place][i].stt << ' ' << mp[place][i].ma << ' ' << mp[place][i].ten << ' ' << mp[place][i].lop << ' ' << mp[place][i].email << ' ' << mp[place][i].cty << endl;
    }
}