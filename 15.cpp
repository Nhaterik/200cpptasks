#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 1000001
#define mod 1000000007
 vector<int> fibo(10001);
class CheckFibo
{
private:
    int n;
   
    unordered_set<int> F;

public:
    void init()
    {
        fibo[0] = 0;
        fibo[1] = 1;
        F.insert(0);
        F.insert(1);
        for (int i = 2; i < 19; i++)
        {
            fibo[i] = fibo[i - 2] + fibo[i - 1];
            F.insert(fibo[i]);
        }
    }
    void solve()
    {
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (F.find(a[i]) != F.end())
                cout << a[i] << ' ';
        }
        cout << endl;
    }
};
int main()
{
    long long t;
    cin >> t;
    CheckFibo x;
    x.init();
    while (t--)
    {
        x.solve();
    }
}