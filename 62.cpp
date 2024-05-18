#include <bits/stdc++.h>
using namespace std;
class maxNumber
{
private:
    int n, x;

public:
    void input()
    {
        cin >> n >> x;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        sort(v.begin(), v.end());
        cout << v[x - 1] << endl;
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