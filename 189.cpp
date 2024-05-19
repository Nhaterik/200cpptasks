#include <bits/stdc++.h>
using namespace std;
struct PhanSo
{
    long long x, y;
};
void nhap(PhanSo &X)
{
    cin >> X.x >> X.y;
}
void rutgon(PhanSo &X)
{
    long long GCD = __gcd(X.x, X.y);
    X.x = X.x / GCD;
    X.y = X.y / GCD;
}
void in(PhanSo X)
{
    cout << X.x << "/" << X.y;
}
int main()
{
    struct PhanSo p;
    nhap(p);
    rutgon(p);
    in(p);
    return 0;
}
