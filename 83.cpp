#include <bits/stdc++.h>
using namespace std;
struct SinhVien
{
    string ma, ten, lop, email;
};
bool cmp(SinhVien &a, SinhVien &b)
{
    if (a.lop != b.lop)
        return a.lop < b.lop;
    else
        return a.ma < b.ma;
}
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    SinhVien list[n];
    for (int i = 0; i < n; i++)
    {
        getline(cin, list[i].ma);
        getline(cin, list[i].ten);
        getline(cin, list[i].lop);
        getline(cin, list[i].email);
    }
    sort(list, list + n, cmp);
    for (int i = 0; i < n; i++)
    {
        cout << list[i].ma << ' ' << list[i].ten << ' ' << list[i].lop << ' ' << list[i].email << endl;
    }
}