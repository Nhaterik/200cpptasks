#include <bits/stdc++.h>
using namespace std;
#define ll long long

class CountSameNumber
{
private:
    int n;

public:
    void solve()
    {
        cin >> n;
        int a[n][n];
        map<int, int> mp;

        for (int i = 0; i < n; i++)
        {
            set<int> se; // Reset set for each row
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
                se.insert(a[i][j]);
            }

            for (auto x : se)
            {
                mp[x]++;
            }
        }

        int dem = 0;
        for (auto x : mp)
        {
            if (x.second == n)
                dem++;
        }

        cout << dem << endl;
    }
};
int main()
{
    long long t;
    cin >> t;
    CountSameNumber x;
    while (t--)
    {
        x.solve();
    }
}