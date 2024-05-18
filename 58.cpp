#include <bits/stdc++.h>
using namespace std;
class maxNumber
{
private:
    int n, k;

public:
    static bool cmp(string &a, string &b)
    {
        string ab = a + b;
        string ba = b + a;
        return ab > ba;
    }
    void input()
    {
        cin >> n;
        vector<string> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        sort(v.begin(), v.end(), cmp);
        for (int i = 0; i < n; i++)
            cout << v[i];
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