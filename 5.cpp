#include <bits/stdc++.h>
using namespace std;

// Input:

// Output:

// 2
// 6
// 10

// 1 2 3 2 5 2
// 1 2 3 2 5 2 7 2 3 2
#define MAX 1000001
class MinimumPrime
{
private:
    int n;
    vector<int> v;

public:
    void init()
    {
        v=vector<int> (MAX);
        int sq = sqrt(MAX);
        for (int i = 1; i < MAX; i++)
            v[i] = i;
        for (int i = 2; i <= sq; i++)
        {
            for (int j = i * i; j < MAX; j += i)
            {
                if (v[j] == j)
                    v[j] = i;
            }
        }
    }
    void solve()
    {
        cin>>n;
        for(int i=1;i<=n;i++ )
        cout<<v[i]<<' ';
        cout<<endl;
    }
};
int main()
{
    int t;
    cin >> t;
    MinimumPrime x;
    x.init();
    while (t--)
    {
        x.solve();
    }
}