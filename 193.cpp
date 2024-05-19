#include <bits/stdc++.h>
using namespace std;
struct NhanVien
{
    string name, sex, date, address, tax, workingdate;
};
void nhap(NhanVien &x)
{
    cin.ignore();

    getline(cin, x.name);
    cin >> x.sex >> x.date;
    cin.ignore();
    getline(cin, x.address);
    cin >> x.tax >> x.workingdate;
}
void inds(NhanVien lists[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (i < 9)
            cout << "0000" << i + 1 << " " << lists[i].name << " " << lists[i].sex << " " << lists[i].date << " " << lists[i].address << " " << lists[i].tax << " " << lists[i].workingdate;
        else
            cout << "000" << i + 1 << " " << lists[i].name << " " << lists[i].sex << " " << lists[i].date << " " << lists[i].address << " " << lists[i].tax << " " << lists[i].workingdate;
        cout << endl;
    }
}

int main()
{
    struct NhanVien ds[50];
    int N, i;
    cin >> N;
    for (i = 0; i < N; i++)
        nhap(ds[i]);
    inds(ds, N);
    return 0;
}