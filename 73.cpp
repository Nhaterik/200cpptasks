#include <bits/stdc++.h>
using namespace std;
struct Clock
{
    int gio, phut, giay;
};
bool cmp(Clock a, Clock b)
{
    if (a.gio != b.gio)
        return a.gio < b.gio;
    else if (a.phut != b.phut)
        return a.phut < b.phut;
    else
        return a.giay < b.giay;
}
int main()
{
    int t;
    cin >> t;
    int ori = t;
    Clock list[t];
    for (int i = 0; i < ori; i++)

    {
        cin >> list[i].gio >> list[i].phut >> list[i].giay;
    }
    sort(list, list + t, cmp);
    for (int i = 0; i < ori; i++)
    {
        cout << list[i].gio << ' ' << list[i].phut << ' ' << list[i].giay << endl;
    }
}