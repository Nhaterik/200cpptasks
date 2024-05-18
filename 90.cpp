#include <bits/stdc++.h>
using namespace std;
struct GV
{
    string ma = "GV", ten, mon, lowername;
};
string stand(string &s)
{
    string res = "";
    int len = s.size();
    for (int i = 0; i < len; i++)
        res += toupper(s[i]);
    return res;
}
string Up(string &s)
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
    for (int i = 0; i < t; i++)
    {
        getline(cin, list[i].ten);
        list[i].lowername = stand(list[i].ten);
        getline(cin, list[i].mon);
        list[i].mon = Up(list[i].mon);
        list[i].ma += string(2 - to_string(i + 1).size(), '0') + to_string(i + 1);
    }
    int q;
    cin >> q;
    cin.ignore();
    for (int j = 0; j < q; j++)
    {
        string str;
        getline(cin, str);
        cout << "DANH SACH GIANG VIEN THEO TU KHOA " << str << ":\n";
        str = stand(str);
        for (int i = 0; i < t; i++)
        {
            if (list[i].lowername.find(str) != string::npos)
                cout << list[i].ma << ' ' << list[i].ten << ' ' << list[i].mon << endl;
        }
    }
}