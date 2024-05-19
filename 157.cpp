#include <bits/stdc++.h>
using namespace std;
int isPal(string n)
{
    for (int i = 0; i < n.size() / 2; i++)
        if (n[i] != n[n.size() - i - 1])
            return 0;
    return 1;
}
int isEven(string n)
{
    for (int i = 0; i < n.size(); i++)
        if ((n[i] - '0') % 2)
            return 0;
    return 1;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string n;
        cin >> n;
        if (isPal(n) && isEven(n))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}