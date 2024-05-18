
// Input:


// 2
// 3
// 16 16 16
// 2 
// 2 3
 
// Output:

// 7
// 4
#include <bits/stdc++.h>
using namespace std;
class SumandDouhble{
 private:int n,cn=0;
 vector<int> v;
 public:
 void solve()
 {
    cin>>n; v=vector<int> (n);
    for(int i=0;i<n;i++) cin>>v[i];
    while(true)
    {
        for(int i=0;i<n;i++)
        {
            if(v[i]%2)
            {
            cn++;
            v[i]--;
            }            
        }
        cn++;
        int ok=0;
        for(int i=0;i<n;i++)
        {
            v[i]/=2;
        }
        for(int i=0;i<n;i++)
        {
            if(v[i])
            {
                ok=1;
                break;
            }
        }
        if(!ok) break;
    }
    cout<<cn-1<<endl;
 }
 
};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
      SumandDouhble x;
      x.solve();
    }

    return 0;
}