#include <bits/stdc++.h>
using namespace std;
class maxNumber
{
private:
    int n;

public:
    void input()
    {
        cin >> n;
        vector<long long> v(n), res(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        res[0] = v[0];
        if (n > 1)
            res[0] *= v[1];
        for (int i = 1; i < n - 1; i++)
            res[i] = v[i - 1] * v[i + 1];
        res[n - 1] = v[n - 1] * v[n - 2];
        for (int i = 0; i < n; i++)
            cout << res[i] << ' ';
        cout << endl;
    }
};
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        maxNumber x;
        x.input();
    }

    return 0;
}