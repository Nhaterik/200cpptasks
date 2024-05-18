#include <bits/stdc++.h>
using namespace std;
class EvenOdd
{
private:
    int n;
    vector<int> v;

public:
    void input()
    {
        cin >> n;
        v = vector<int>(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
    }
    void solve()
    {
        sort(v.begin(), v.end());
        int i = 0, j = v.size() - 1;
        while (i <= j)
        {
            cout << v[j] << ' ';
            j--;
            if (i <= j)
                cout << v[i] << ' ';
            i++;
        }
        cout << endl;
    }
};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        EvenOdd x;
        x.input();
        x.solve();
    }

    return 0;
}