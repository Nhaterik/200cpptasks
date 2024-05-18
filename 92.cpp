#include <bits/stdc++.h>
using namespace std;
int OK = 1;
void init(vector<int> &v, int k)
{
    for (int i = 0; i < k; i++)
        v[i] = i + 1;
}
void change(vector<int> &v, int n, int k)
{
    int i = k - 1;
    while (i >= 0 && v[i] == n - k + i + 1)
        i--;
    if (i == -1)
        OK = 0;
    else
    {
        v[i]++;
        for (int j = i + 1; j < k; j++)
            v[j] = v[j - 1] + 1;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        OK = 1;
        vector<int> v(k);
        init(v, k);
        while (OK)
        {
            for (int i = 0; i < k; i++)
                cout << v[i];
            cout << ' ';
            change(v, n, k);
        }
        cout << endl;
    }
    return 0;
}