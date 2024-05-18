#include <bits/stdc++.h>
using namespace std;
//
// Input:

// Output:

// 2
// 5 2
// 10 4 5 15 20
// 4 2
// -12 34 56 7

// 15 20
// 34 56
class BestMedium
{
private:
    long long n, k, res = 0;
    vector<long long> v, idx;

public:
    void solve()
    {
        cin >> n >> k;
        v = vector<long long>(n);
        idx = vector<long long>(k);
        for (long long i = 0; i < n; i++)
            cin >> v[i];
        for (long long i = 0; i < k; i++)
        {
            res += v[i];
            idx[i] = i;
        }

        int current_sum = res;
        int love = 0;
        for (int i = k; i < n; i++)
        {
            current_sum = current_sum - v[i - k] + v[i];
            if (res < current_sum)
            {
                res = current_sum;
                love = 0;
                for (int j = i - k + 1; j <= i; j++)
                {
                    idx[love++] = j;
                }
            }
        }
        for (long long i = 0; i < k; i++)
            cout << v[idx[i]] << ' ';
        cout << endl;
    }
};
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        BestMedium x;
        x.solve();
    }
}