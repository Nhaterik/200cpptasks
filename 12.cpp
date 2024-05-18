#include <bits/stdc++.h>
using namespace std;
// Input

// Output

// 2

// 2  2  3

// 123 5  2

// 2

// 123
class RepetitiveNumber
{
private:
   	long long a,x,y;

public:

    int solve()
    {
        cin>>a>>x>>y;
	long long GCD=__gcd(x,y);
	for(int i=0;i<GCD;i++)
	cout<<a;
	cout<<endl;
    }
};
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        RepetitiveNumber x;
         x.solve();
    }
}