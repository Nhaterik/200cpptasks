#include <bits/stdc++.h>
using namespace std;
#define MAX 1000001
vector<int> prime(MAX, 1);
class CountPrime
{
private:
    int a, b, cn = 0;

public:
    void init()
    {
        prime[1] = prime[0] = 0;
        int sq = sqrt(MAX);
        for (int i = 2; i < sq; i++)
        {
            for (int j = i * i; j < MAX; j += i)
                if (prime[j])
                    prime[j] = 0;
        }
    }
    void solve()
    {
        cn=0;
        cin >> a >> b;
        for (int i = a; i <= b; i++)
            if (prime[i])
                cn++;
        cout << cn << endl;
    }
};
int main()
{
    long long t;
    cin >> t;
    CountPrime x;
    x.init();
    while (t--)
    {
        x.solve();
    }
}
// Input:

// Output:

// 2
// 1 10
// 5 10

// 4
// 2