#include <bits/stdc++.h>
using namespace std;

struct SinhVien
{
    string code = "B20DCCN001", name, cla, date;
    float grade;

    friend istream &operator>>(istream &in, SinhVien &x)
    {
        getline(in, x.name);
        in >> x.cla >> x.date >> x.grade;
        return in;
    }

    friend ostream &operator<<(ostream &out, SinhVien x)
    {
        out << x.code << " " << x.name << " " << x.cla << " ";
        if (x.date[1] == '/')
            x.date = "0" + x.date;
        if (x.date[4] == '/')
            x.date.insert(3, "0");
        out << x.date << " " << fixed << setprecision(2) << x.grade;
        return out;
    }
};

int main()
{
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}
