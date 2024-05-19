#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        set<int> s;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            s.insert(x);
        }
        int res = 0, k = 0;
        vector<int> v;
        for (auto it : s)
            v.push_back(it);
        
        for (int i = v[0]; i <= v[v.size()-1]; i++)
        {
            if (i == v[k])
            {

                k++;
            }
            else
                res++;
        }
        cout << res << endl;
    }

    return 0;
}
