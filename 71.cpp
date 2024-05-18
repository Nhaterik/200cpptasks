#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;

class SinhVien
{
private:
    string code, name, grade;
    float p1, p2, p3;

public:
    void nhap()
    {
        cin.ignore();
        getline(cin, code);
        getline(cin, name);
        getline(cin, grade);
        cin >> p1 >> p2 >> p3;
    }

    const string &getName() const
    {
        return name;
    }

    friend bool cmp(const SinhVien &a, const SinhVien &b);

    void in() const
    {
        cout << code << " " << name << " " << grade << " " << fixed << setprecision(1) << p1 << " " << fixed << setprecision(1) << p2 << " " << fixed << setprecision(1) << p3 << endl;
    }
};

bool cmp(const SinhVien &a, const SinhVien &b)
{
    return a.getName() < b.getName();
}

int main()
{
    int n;
    cin >> n;
    SinhVien *ds = new SinhVien[n];

    for (int i = 0; i < n; i++)
    {
        ds[i].nhap();
    }

    sort(ds, ds + n, cmp);

    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << " ";
        ds[i].in();
    }

    delete[] ds;

    return 0;
}