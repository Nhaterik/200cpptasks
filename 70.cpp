#include <bits/stdc++.h>
using namespace std;
#define ll long long
struct SinhVien
{
    string code, name, grade;
    float p1, p2, p3;
};

void nhap(SinhVien &x)
{
    cin >> x.code;
    cin.ignore();
    getline(cin, x.name);
    cin >> x.grade >> x.p1 >> x.p2 >> x.p3;
}
bool cmp(SinhVien a, SinhVien b)
{
    return a.code < b.code;
}
void sap_xep(SinhVien ds[], int n)
{
    sort(ds, ds + n, cmp);
}
void in_ds(SinhVien ds[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << " " << ds[i].code << " " << ds[i].name << " " << ds[i].grade << " " << fixed << setprecision(1) << ds[i].p1 << " " << fixed << setprecision(1) << ds[i].p2 << " " << fixed << setprecision(1) << ds[i].p3 << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    struct SinhVien *ds = new SinhVien[n];
    for (int i = 0; i < n; i++)
    {
        nhap(ds[i]);
    }
    sap_xep(ds, n);
    in_ds(ds, n);
    return 0;
}