#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin.ignore();
        string s;
        getline(cin, s);
        stringstream ss(s);
        string word;
        int cn = 0;
        while (ss >> word)
        {
            cn++;
        }
        cout << cn << endl;
    }
}