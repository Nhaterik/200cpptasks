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
        os << x.code << " " << x.name << " " << x.cl << " " << x.email;
        return os;
    }
    bool operator<(stu x)
    {
        return code < x.code;
    }
};

int main()
{
    stu x;
    vector<stu> v;
    while (cin >> x)
    {
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << endl;

    return 0;
}
