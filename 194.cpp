#include <bits/stdc++.h>
using namespace std;
struct SinhVien
{
    string code = "B20DCCN001", name, cla, date;
    float grade;
    void nhap()
    {
        getline(cin, name);
        cin >> cla >> date >> grade;
    }
    void xuat()
    {
        if (date[1] == '/')
            date = "0" + date;
        if (date[4] == '/')
            date.insert(3, "0");
        cout << code << " " << name << " " << cla << " " << date << " " << fixed << setprecision(2) << grade;
    }
};

int main()
{
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}