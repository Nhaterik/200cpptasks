#include <bits/stdc++.h>
using namespace std;
class SortOddandEven
{
private:
    int n;

public:
    void solve()
    {

        cin >> n;
        int a[n + 1];
        int b[n + 1];

        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }

        sort(a + 1, a + n + 1);
        int k = 1;
        for (int i = 1; i <= n; i += 2)
        {
            b[i] = a[k++];
        }
        for (int i = 2; i <= n; i += 2)
        {
            b[i] = a[k++];
        }
        for (int i = 1; i <= n; i++)
            cout << b[i] << " ";
        cout << endl;
    }
};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        SortOddandEven x;
        x.solve();
    }

    return 0;
}