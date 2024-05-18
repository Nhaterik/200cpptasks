#include <bits/stdc++.h>
using namespace std;
class Div
{
private:
    string n1;
    long long n2;

public:
    void input()
    {
        cin >> n1 >> n2;
    }
    void solve()
    {
        long long res = 0;
        for (int i = 0; i < n1.size(); i++)
            res = (res * 10 + n1[i] - '0') % n2;
        cout << res << endl;
    }
};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Div x;
        x.input();
        x.solve();
    }

    return 0;
}