
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 1000001
#define mod 1000000007
vector<int> fibo(10001);
class Mountain
{
private:
    int n, l, r;

public:
    void solve()
    {
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        cin >> l >> r;

        int max = INT_MIN, index = -1;

        for (int i = l; i <= r; i++)
        {
            if (a[i] >= max)
            {
                max = a[i];
                index = i;
            }
        }

        bool ok = true;

        for (int i = l; i < index; i++)
        {
            if (a[i] > a[i + 1])
            {
                ok = false;
                break;
            }
        }
        for (int i = index; i < r; i++)
        {
            if (a[i] < a[i + 1])
            {
                ok = false;
                break;
            }
        }

        if (ok)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
};
int main()
{
    long long t;
    cin >> t;
    Mountain x;
    while (t--)
    {
        x.solve();
    }
}
