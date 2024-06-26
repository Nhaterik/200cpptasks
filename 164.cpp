#include <bits/stdc++.h>
using namespace std;

bool isDominant(vector<int> &v)
{
    int evenCount = 0, oddCount = 0;
    for (int a : v)
    {
        if (a % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }
    if (v.size() % 2 == 0)
        return evenCount > oddCount;
    else
        return oddCount > evenCount;
}

int main()
{
    int T;
    cin >> T;
    cin.ignore();
    while (T--)
    {
        string s;
        getline(cin, s);
        string number;
        stringstream ss(s);
        vector<int> v;
        while (ss >> number)
        {

            v.push_back(stoi(number));
        }
        if (isDominant(v))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}