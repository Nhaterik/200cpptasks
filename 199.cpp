#include <iostream>
#include <algorithm>

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
void rutgon(long long &x, long long &y)
{
    long long GCD = gcd(x, y);
    x /= GCD;
    y /= GCD;
}
struct PhanSo
{
    long long tuSo, mauSo;

    PhanSo(long long nu, long long de)
    {
        tuSo = nu;
        mauSo = de;
    }

    friend PhanSo operator+(PhanSo &x, PhanSo &y)
    {
        PhanSo result(1, 1);
        long long LCM = lcm(x.mauSo, y.mauSo);
        x.tuSo = (LCM / x.mauSo) * x.tuSo;
        y.tuSo = (LCM / y.mauSo) * y.tuSo;
        result.tuSo = x.tuSo + y.tuSo;
        result.mauSo = LCM;
        rutgon(result.tuSo, result.mauSo);
        return result;
    }
};

istream &operator>>(istream &is, PhanSo &p)
{
    is >> p.tuSo >> p.mauSo;
    return is;
}

ostream &operator<<(ostream &os, PhanSo p)
{
    os << p.tuSo << "/" << p.mauSo;
    return os;
}

int main()
{
    PhanSo p(1, 1), q(1, 1);
    cin >> p >> q;
    cout << p + q;
    return 0;
}