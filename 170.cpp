#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, m;
        cin >> n >> m;
        long long a[n], b[m];
        for (long long &x : a)
            cin >> x;
        for (long long &x : b)
            cin >> x;

        sort(b, b + m);
        sort(a, a + n, greater<long long>());
        // for(long long x:a) cout<<x<<" ";
        // cout<<endl;
        // for(long long x:b) cout<<x<<" ";
        // cout<<endl;
        long long sum = a[0] * b[0];
        cout << sum << endl;
    }
}