#include <bits/stdc++.h>
using namespace std;

struct stu
{
    string code, name, cl, email, major;
    friend istream &operator>>(istream &is, stu &x)
    {
        getline(is, x.code);
        getline(is, x.name);
        getline(is, x.cl);
        getline(is, x.email);
        x.major = x.code.substr(5, 2);
        return is;
    }
    friend ostream &operator<<(ostream &os, stu x)
    {
        os << x.code << " " << x.name << " " << x.cl << " " << x.email << endl;
        return os;
    }
};
void Up(string &s)
{
    stringstream ss(s);
    string f, se;
    getline(ss, f, ' ');
    getline(ss, se, ' ');

    s = string(1, toupper(f[0])) + string(1, toupper(se[0]));
}
int main()
{
    int n;
    cin >> n;
    cin.ignore();

    stu l[n];
    for (int i = 0; i < n; i++)
        cin >> l[i];
    int q;
    cin >> q;
    cin.ignore();
    while (q--)
    {
        string s, key;
        getline(cin, s);
        Up(s);
        key = s;
        if (key == "KT")
        {
            key = "KE TOAN";
        }
        else if (key == "CN")
        {
            key = "CONG NGHE THONG TIN";
        }
        else if (key == "AT")
        {
            key = "AN TOAN THONG TIN";
        }
        else if (key == "VT")
        {
            key = "VIEN THONG";
        }
        else if (key == "DT")
        {
            key = "DIEN TU";
        }
        cout << "DANH SACH SINH VIEN NGANH " << key << ":" << endl;
        for (int i = 0; i < n; i++)
        {
            if (s == "AT" || s == "CN")
            {
                if ((l[i].cl.find('E') == string::npos) && l[i].major == s)
                    cout << l[i];
            }
            else if (l[i].major == s)
                cout << l[i];
        }
    }
    return 0;
}