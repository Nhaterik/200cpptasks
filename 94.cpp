#include <bits/stdc++.h>
using namespace std;
struct bs
{
    string code, name;
    int inter;
};
bool cmp(bs a, bs b)
{
    if (a.inter != b.inter)
        return a.inter > b.inter;
    else
        return a.code < b.code;
}
int main()
{
    int n;
    cin >> n;
    bs l[n];
    for (int i = 0; i < n; i++)
    {
        cin >> l[i].code;
        cin.ignore();
        getline(cin, l[i].name);
        cin >> l[i].inter;
    }
    sort(l, l + n, cmp);
    int q;
    cin >> q;
    while (q--)
    {
        int a, b;
        cin >> a >> b;
        cout << "DANH SACH DOANH NGHIEP NHAN TU " << a << " DEN " << b << " SINH VIEN:\n";
        for (int i = 0; i < n; i++)
            if (l[i].inter <= b && l[i].inter >= a)
                cout << l[i].code << " " << l[i].name << " " << l[i].inter << endl;
    }

    return 0;
}