#include <bits/stdc++.h>
using namespace std;
struct SinhVien
{
    string ma, ten, lop, email;
};
int search(string s)
{
    return stoi(s.substr(1, 2));
}
int main()
{

    int n;
    cin >> n;
    scanf("\n");
    SinhVien list[n];
    unordered_map<int, vector<SinhVien>> mp;
    for (int i = 0; i < n; i++)
    {
        getline(cin, list[i].ma);
        getline(cin, list[i].ten);
        getline(cin, list[i].lop);
        getline(cin, list[i].email);
        mp[search(list[i].lop)].push_back(list[i]);
    }
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        cin >> n;
        cout << "DANH SACH SINH VIEN KHOA " << n << ":\n";
        n = n % 100;
        for (auto it : mp[n])
        {
            cout << it.ma << ' ' << it.ten << ' ' << it.lop << ' ' << it.email << endl;
        }
    }
}