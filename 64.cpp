#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll gcd(ll a, ll b)
{
    if (b != 0)
        return gcd(b, a % b);
    return a;
}

class PhanSo
{
public:
    ll tu, mau;
    friend PhanSo operator+(PhanSo a, PhanSo b)
    {
        PhanSo sum;
        sum.tu = a.tu * b.mau + b.tu * a.mau;
        sum.mau = a.mau * b.mau;
        return sum;
    }
    friend PhanSo operator*(PhanSo a, PhanSo b)
    {
        PhanSo muti;
        muti.tu = a.tu * b.tu;
        muti.mau = a.mau * b.mau;
        return muti;
    }
};
void shorten(PhanSo &a)
{
    ll GCD = gcd(a.tu, a.mau);
    a.tu = a.tu / GCD;
    a.mau = a.mau / GCD;
}
void process(PhanSo a, PhanSo b)
{
    PhanSo c, d;
    c = a + b;
    shorten(c);
    c.tu *= c.tu;
    c.mau *= c.mau;

    d = a * b * c;

    shorten(d);

    cout << c.tu << "/" << c.mau << " ";
    cout << d.tu << "/" << d.mau << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        PhanSo A;
        PhanSo B;
        cin >> A.tu >> A.mau >> B.tu >> B.mau;
        process(A, B);
    }
}