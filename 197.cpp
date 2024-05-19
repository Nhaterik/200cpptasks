#include <bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
struct PhanSo
{
    long long de, nu;
    PhanSo(long long nu1, long long de1)
    {
        nu = nu1;
        de = de1;
    }
    friend istream &operator>>(istream &input, PhanSo &x)
    {
        input >> x.nu >> x.de;
        return input;
    }
    void rutgon()
    {
        long long GCD = gcd(nu, de);
        nu = nu / GCD;
        de = de / GCD;
    }
    friend ostream &operator<<(ostream &out, PhanSo x)
    {
        out << x.nu << "/" << x.de;
        return out;
    }
};

int main()
{
    PhanSo p(1, 1);
    cin >> p;
    p.rutgon();
    cout << p;
    return 0;
}