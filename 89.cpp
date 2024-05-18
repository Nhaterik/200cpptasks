#include <bits/stdc++.h>
using namespace std;
struct GV
{
    string ma = "GV", ten, mon, major;
};
string stand(string &s)
{
    stringstream ss(s);
    string word, res = "";
    while (ss >> word)
        res += toupper(word[0]);
    return res;
}

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    GV list[t];
    unordered_map<string, vector<GV>> mp;
    for (int i = 0; i < t; i++)
    {
        getline(cin, list[i].ten);
        getline(cin, list[i].mon);
        list[i].ma += string(2 - to_string(i + 1).size(), '0') + to_string(i + 1);
        list[i].major = stand(list[i].mon);
        mp[list[i].major].push_back(list[i]);
    }
    int q;
    cin >> q;
    cin.ignore();
    for (int i = 0; i < q; i++)
    {
        string str;
        getline(cin, str);
        str = stand(str);
        cout << "DANH SACH GIANG VIEN BO MON " << str << ":\n";
        for (auto it : mp[str])
            cout << it.ma << ' ' << it.ten << ' ' << str << endl;
    }
}