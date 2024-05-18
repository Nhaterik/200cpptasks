#include <bits/stdc++.h>
using namespace std;

struct stu
{
    string code, name, cl, email;
    friend istream &operator>>(istream &is, stu &x)
    {
        getline(is, x.code);
        getline(is, x.name);
        getline(is, x.cl);
        getline(is, x.email);
        return is;
    }
    friend ostream &operator<<(ostream &os, stu x)
    {
        os << x.code << " " << x.name << " " << x.cl << " " << x.email << endl;
        return os;
    }
};

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
    while (q--)
    {
        string s;
        cin >> s;
        cout << "DANH SACH SINH VIEN LOP " << s << ":" << endl;
        for (int i = 0; i < n; i++)
            if (s == l[i].cl)
                cout << l[i];
    }

    return 0;
}