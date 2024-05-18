#include <bits/stdc++.h>
using namespace std;
int OK = 1;
void init(vector<int> &v, int n)
{
    for (int i = 0; i < n; i++)
        v[i] = i + 1;
}
void change(vector<int> &v, int n)
{
    int i = n - 2;
    while (i >= 0 && v[i] > v[i + 1])
        i--;
    if (i == -1)
        OK = 0;
    else
    {
        int j = n - 1;
        while (v[i] > v[j])
            j--;
        swap(v[i], v[j]);
        reverse(v.begin() + i + 1, v.end());
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        OK = 1;
        vector<int> a(n);
        init(a, n);
        while (OK)
        {
            for (int i = 0; i < n; i++)
                cout << a[i];
            change(a, n);
            cout << ' ';
        }
        cout << endl;
    }
}