#include <bits/stdc++.h>
using namespace std;
class MatHang
{
public:
    string name, cla;
    float gb, gm, profit;
    int ma;
};
bool cmp(MatHang a, MatHang b)
{
    return a.profit > b.profit;
}
int main()
{
    int t;
    cin >> t;
    MatHang list[t];
    for (int i = 0; i < t; i++)
    {
        cin.ignore();
        list[i].ma = i + 1;
        getline(cin, list[i].name);
        getline(cin, list[i].cla);
        cin >> list[i].gm >> list[i].gb;
        list[i].profit = list[i].gb - list[i].gm;
    }
    sort(list, list + t, cmp);
    for (int i = 0; i < t; i++)
        cout << list[i].ma << " " << list[i].name << " " << list[i].cla << ' ' << fixed << setprecision(2) << list[i].profit << endl;
    return 0;
}