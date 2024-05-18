#include <bits/stdc++.h>
using namespace std;
static int cn = 1;
class NhanVien
{
private:
    string ma, ten, gt, ns, dc, tax, nhd;

public:
    string getMa(NhanVien &a)
    {
        return a.ns;
    }
    friend istream &operator>>(istream &is, NhanVien &a)
    {
        is.ignore();
        a.ma = string(5 - to_string(cn).size(), '0') + to_string(cn);
        cn++;
        getline(is, a.ten);
        getline(is, a.gt);
        getline(is, a.ns);
        getline(is, a.dc);
        is >> a.tax >> a.nhd;
        return is;
    }
    friend ostream &operator<<(ostream &os, NhanVien &a)
    {
        os << a.ma << ' ' << a.ten << ' ' << a.gt << ' ' << a.ns << ' ' << a.dc << ' ' << a.tax << ' ' << a.nhd << endl;
        return os;
    }
};
bool cmp(NhanVien &a, NhanVien &b)
{
    string year = a.getMa(a).substr(6), month = a.getMa(a).substr(3, 2), day = a.getMa(a).substr(0, 2);
    string year1 = b.getMa(b).substr(6), month1 = b.getMa(b).substr(3, 2), day1 = b.getMa(b).substr(0, 2);
    if (year != year1)
        return year < year1;
    else if (day != day1)
        return day < day1;
    else
        return month < month1;
}
void sapxep(NhanVien ds[], int n)
{
    sort(ds, ds + n, cmp);
}
int main()
{
    NhanVien ds[50];
    int N, i;
    cin >> N;
    for (i = 0; i < N; i++)
        cin >> ds[i];
    sapxep(ds, N);
    for (i = 0; i < N; i++)
        cout << ds[i];
    return 0;
}