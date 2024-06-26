#include <bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
long long lcm(long long a, long long b)
{
    return (a * b) / (gcd(a, b));
}
struct PhanSo
{
    long long de, nu;
};
void cut(PhanSo &a)
{
    long long GCD = gcd(a.de, a.nu);
    a.de /= GCD;
    a.nu /= GCD;
}
void nhap(PhanSo &a)
{
    cin >> a.nu >> a.de;
}
PhanSo tong(PhanSo &p, PhanSo &q)
{
    // p.nu=(p.nu*q.de)+(q.nu*p.de);
    // p.de=p.de*q.de;
    long long LCM = lcm(p.de, q.de);
    p.nu = (LCM / p.de) * p.nu;
    q.nu = (LCM / q.de) * q.nu;
    p.nu += q.nu;
    p.de = LCM;
    cut(p);
    return p;
}
void in(PhanSo a)
{
    cout << a.nu << "/" << a.de;
}
int main()
{
    struct PhanSo p, q;
    nhap(p);
    nhap(q);
    PhanSo t = tong(p, q);
    in(t);
    return 0;
}