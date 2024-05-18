#include <bits/stdc++.h>
using namespace std;
class Sphenic{
 private: int n;
 public:
 int check(int n)
{
	int cn = 0;
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			cn++;
			n /= i;
			if (n % i == 0)
				return 0;
		}
	}
	if (cn >1) cn++;
		return cn == 3;
}
void solve()
{
    cin>>n;
    if(check(n)) cout<<1;
    else cout<<0;
    cout<<endl;
}
};
int main ()
{
 int t; cin>>t;
 while(t--)
 {
     Sphenic x;
     x.solve();
 }
}