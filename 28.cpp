// fb: nhaterik
#include <bits/stdc++.h>
using namespace std;
class Balance
{
private:
    int n;
    vector<int> v, sum;

public:
    void input()
    {
        cin >> n;
        sum = v = vector<int>(n + 1);

        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
            sum[i] = v[i] + sum[i - 1];
        }
    }
    int solve()
    {
        for (int i = 1; i <= n; i++)
        {
            if (sum[i] - v[i] == sum[n] - sum[i])
                return i;
        }
        return -1;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        Balance x;
        x.input();
        int res = x.solve();
        if (res != -1)
            cout << res << endl;
        else
            cout << res << endl;
    }
}