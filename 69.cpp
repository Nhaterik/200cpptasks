#include <bits/stdc++.h>
using namespace std;
int cn = 0;
struct NhanVien
{
    string ten, gt, ns, dc, tax, cdate, d, m, y, ma = "000";
};
void nhap(NhanVien &a)
{
    cin.ignore();
    (cn < 9) ? a.ma += '0' + to_string(cn + 1) : a.ma += to_string(cn + 1);
    cn++;
    getline(cin, a.ten);
    getline(cin, a.gt);
    getline(cin, a.ns);
    getline(cin, a.dc);
    getline(cin, a.tax);
    cin >> a.cdate;
    a.m = a.ns.substr(0, 2);
    a.d = a.ns.substr(3, 2);
    a.y = a.ns.substr(6);
}
bool cmp(NhanVien &a, NhanVien &b)
{
    if (a.y != b.y)
        return a.y < b.y;
    else if (a.m != b.m)
        return a.m < b.m;
    else
        return a.d < b.d;
}
void sapxep(NhanVien a[], int n)
{
    sort(a, a + n, cmp);
}
void inds(NhanVien ds[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << ds[i].ma << ' ' << ds[i].ten << ' ' << ds[i].gt << ' ' << ds[i].ns << ' ' << ds[i].dc << ' ' << ds[i].tax << ' ' << ds[i].cdate << endl;
    }
}
int main()
{
    struct NhanVien ds[50];
    int N, i;
    cin >> N;
    for (i = 0; i < N; i++)
        nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}