#include <bits/stdc++.h>
using namespace std;
#define MAX 1000001
class MaximumMinusFollowingOrder
{
private:
    int n;

public:
    void solve()
    {
        cin >> n;
        int a[n];
        for (int &x : a)
            cin >> x;
        int mx = -1;
        int mn = a[0];
        for (int i = 1; i < n; i++)
        {
            if (a[i] < mn)
                mn = a[i];
            else if (a[i] - mn > mx)
                mx = a[i] - mn;
        }
        cout << mx << endl;
    }
};
int main()
{
    long long t;
    cin >> t;
    MaximumMinusFollowingOrder x;
    while (t--)
    {
        x.solve();
    }
}
