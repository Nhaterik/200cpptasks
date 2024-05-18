#include <bits/stdc++.h>
using namespace std;

class BinaryArray
{
private:
    int n, mx = 0;

public:
    void solve()
    {
        cin >> n;
        int a1[n], a2[n];
        for (int i = 0; i < n; i++)
            cin >> a1[i];
        for (int i = 0; i < n; i++)
            cin >> a2[i];
        for (int i = 0; i < n; i++)
        {
            int sum1 = 0, sum2 = 0;
            for (int j = i; j < n; j++)
            {
                sum1 += a1[j], sum2 += a2[j];
                if (sum1 == sum2)
                    mx = max(mx, j - i + 1);
            }
        }
        cout << mx << endl;
    }
};
int main()
{
    long long t;
    cin >> t;
    BinaryArray x;
    while (t--)
    {
        x.solve();
    }
}