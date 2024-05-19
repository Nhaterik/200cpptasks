#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    map<string, int> mp;

    while (n--)
    {
        string s;
        getline(cin, s);
        mp[s]++;
    }
    cout << mp.size();
}