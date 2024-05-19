#include <bits/stdc++.h>
using namespace std;
struct SinhVien
{
    string name, cla, date, code = "B20DCCN001";

    float grade;
};
void nhap(SinhVien &X)
{
    getline(cin, X.name);
    cin >> X.cla >> X.date >> X.grade;
    if (X.date[1] == '/')
        X.date = "0" + X.date;
    if (X.date[4] == '/')
        X.date.insert(3, "0");
}

void in(SinhVien X)
{
    cout << X.code << " " << X.name << " " << X.cla << " " << X.date << " " << fixed << setprecision(2) << X.grade;
}
int main()
{
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}