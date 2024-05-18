#include <bits/stdc++.h>
using namespace std;
int cn = 1;
class NhanVien
{
private:
    string ma, ten, gt, ns, dc, tax, nhd;

public:
    string getMa(NhanVien &a)
    {
        return a.ma;
    }
    friend istream &operator>>(istream &is, NhanVien &a)
    {
        scanf("\n");
        a.ma = string(5 - to_string(cn).size(), '0') + to_string(cn);
        cn++;
        getline(is, a.ten);
        getline(is, a.gt);
        getline(is, a.ns);
        getline(is, a.dc);
        getline(is, a.tax);
        getline(is, a.nhd);
        return is;
    }
    friend ostream &operator<<(ostream &os, NhanVien &a)
    {
        os << a.ma << ' ' << a.ten << ' ' << a.gt << ' ' << a.ns << ' ' << a.dc << ' ' << a.tax << ' ' << a.nhd << endl;
        return os;
    }
};

int main()
{
    NhanVien ds[50];
    int N, i;
    cin >> N;
    for (i = 0; i < N; i++)
        cin >> ds[i];
    for (i = 0; i < N; i++)
        cout << ds[i];
    return 0;
}