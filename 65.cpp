#include <bits/stdc++.h>
using namespace std;
struct SinhVien
{
    string full, cla, date, ma = "B20DCCN0";
    float gpa;
};
void nhap(SinhVien ds[50], int n)
{
    for (int i = 0; i < n; i++)
    {
        ds[i].ma += string(2 - to_string(i + 1).size(), '0') + to_string(i + 1);
        cin.ignore();
        getline(cin, ds[i].full);
        getline(cin, ds[i].cla);
        getline(cin, ds[i].date);
        cin >> ds[i].gpa;
    }
}
void in(SinhVien ds[50], int n)
{

    for (int i = 0; i < n; i++)
    {
        if (ds[i].date[1] == '/')
            ds[i].date = "0" + ds[i].date;
        if (ds[i].date[4] == '/')
            ds[i].date = ds[i].date.insert(3, "0");
        cout << ds[i].ma << ' ' << ds[i].full << ' ' << ds[i].cla << ' ' << ds[i].date << ' ' << fixed << setprecision(2) << ds[i].gpa << endl;
    }
}
int main()
{
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}