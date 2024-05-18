#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 1000001
#define mod 1000000007
class FindMiximuimkth
{
private:
    int n, k;

public:
    void solve()
    {
        cin >> n >> k;
        int a[n * n];
        for (int i = 0; i < n * n; i++)
            cin >> a[i];
        sort(a, a + n * n);
        cout << a[k - 1] << endl;
    }
};
int main()
{
    long long t;
    cin >> t;
    FindMiximuimkth x;
    while (t--)
    {
        x.solve();
    }
}