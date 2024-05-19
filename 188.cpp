#include <bits/stdc++.h>
using namespace std;
struct ThiSinh
{
    string name;
    string date;
    float grade1, grade2, grade3;
};
void nhap(ThiSinh &X)
{
    getline(cin, X.name);
    cin >> X.date >> X.grade1 >> X.grade2 >> X.grade3;
}
void in(ThiSinh X)
{
    cout << X.name << " " << X.date << " " << fixed << setprecision(1) << X.grade1 + X.grade2 + X.grade3;
}
int main()
{
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}
