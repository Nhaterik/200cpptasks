#include <bits/stdc++.h>
using namespace std;
int cn = 0;
class NhanVien
{
public:
    string name, gt, ns, dc, tax, wd;
    friend istream &operator>>(istream &is, NhanVien &a)
    {
        getline(is, a.name);
        getline(is, a.gt);
        getline(is, a.ns);
        getline(is, a.dc);
        getline(is, a.tax);
        getline(is, a.wd);
        return is;
    }
    friend ostream &operator>>(ostream &out, NhanVien a)
    {
        out << "00001 " << a.name << ' ' << a.gt << ' ' << a.ns << ' ' << a.dc << ' ' << a.tax << ' ' << a.wd << endl;
        return out;
    }
};
int main()
{
    NhanVien a;
    cin >> a;
    cout >> a;
    return 0;
}