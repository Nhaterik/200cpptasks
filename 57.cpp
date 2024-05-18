#include <bits/stdc++.h>
using namespace std;
class count
{
private:
    int n, k;

public:
    void input()
    {
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        sort(v.begin(), v.end());
        long long cn = 0;
        for (int i = 1; i < n; i++)
        {
            int idx = upper_bound(v.begin(), v.begin() + i, v[i] - k) - v.begin();
            cn += i - idx;
        }
        cout << cn << endl;
    }
};
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        class count x;
        x.input();
    }

    return 0;
}