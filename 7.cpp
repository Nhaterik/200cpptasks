#include <bits/stdc++.h>
using namespace std;
class DivisibleByaOrb
{
private:
    int m,n,a,b,cn=0;

public:
 
    void solve()
    {
        cin>>m>>n>>a>>b;
	 for(int i=m;i<=n;i++)
	 if(i%a==0 || i%b==0) cn++;
	 cout<<cn<<endl;
    }
};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        DivisibleByaOrb x;
        x.solve();
    }
}