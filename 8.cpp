#include <bits/stdc++.h>
using namespace std;
class DivisorOfMinimumPrime
{
private:
    int n;

public:
int find(int n)
{
	for(int i=2;i<=sqrt(n);i++)
	if(n%i==0) return i;
	return n;
}

 
    void solve()
    {
    cin>>n;
     for(int i=1;i<=n;i++)
     cout<<find(i)<<" ";
    	cout<<endl;
    }
};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        DivisorOfMinimumPrime x;
        x.solve();
    }
}