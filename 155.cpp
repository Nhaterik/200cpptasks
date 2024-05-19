#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    string sde;
    cin >> sde;
    string word;
    stringstream ss(s);
    while (ss >> word)
    {
        if (word != sde)
            cout << word << " ";
    }
}