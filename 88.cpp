#include <bits/stdc++.h>
using namespace std;
int cn = 0;
struct GV
{
    string ma = "GV", ten, mon, name;
};
string div(string &s)
{
    stringstream ss(s);
    string word;
    while (getline(ss, word, ' '))
        int j = 0;
    return word;
}
string stand(string &s)
{
    stringstream ss(s);
    string word, res = "";
    while (ss >> word)
        res += toupper(word[0]);
    return res;
}
bool cmp(GV &a, GV &b)
{
    if (a.name != b.name)
        return a.name < b.name;
    else
        return a.ma < b.ma;
}
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    GV list[t];
    for (int i = 0; i < t; i++)
    {
        getline(cin, list[i].ten);
        list[i].name = div(list[i].ten);
        getline(cin, list[i].mon);
        list[i].ma += string(2 - to_string(i + 1).size(), '0') + to_string(i + 1);
    }
    sort(list, list + t, cmp);
    for (int i = 0; i < t; i++)
    {
        cout << list[i].ma << ' ';
        cout << list[i].ten << ' ' << stand(list[i].mon) << endl;
    }
}