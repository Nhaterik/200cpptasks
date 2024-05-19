#include <bits/stdc++.h>
using namespace std;
void standard(string &s)
{
    s[0] = toupper(s[0]);
    for (int i = 1; i < s.size(); i++)
        s[i] = tolower(s[i]);
}
string inc(string &s)
{
    for (int i = 0; i < s.size(); i++)
        s[i] = toupper(s[i]);
    return s;
}
int main()
{
    string s;
    getline(cin, s);

    string word;
    vector<string> v;
    stringstream ss(s);
    while (ss >> word)
    {
        standard(word);
        v.push_back(word);
    }
    for (int i = 0; i < v.size() - 1; i++)
    {
        cout << v[i];
        if (i != v.size() - 2)
            cout << " ";
    }
    cout << ", " << inc(v[v.size() - 1]);

    return 0;
}
