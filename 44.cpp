#include <bits/stdc++.h>
using namespace std;
class Standize
{
private:
    int way;
    string s;

public:
    void input()
    {
        cin >> way;
        cin.ignore();
        getline(cin, s);
    }
    void solve1(vector<string> v)
    {
        cout << v[v.size() - 1] << ' ';
        for (int i = 0; i < v.size() - 1; i++)
            cout << v[i] << ' ';
    }
    void solve2(vector<string> v)
    {
        cout << v[1] << ' ';
        for (int i = 2; i < v.size(); i++)
            cout << v[i] << ' ';
        cout << v[0];
    }
    string Beau(string &s)
    {
        for (int i = 0; i < s.size(); i++)
            s[i] = tolower(s[i]);
        s[0] = toupper(s[0]);
        return s;
    }

    void solve()
    {
        vector<string> v;
        string word;
        stringstream ss(s);
        while (ss >> word)
            v.push_back(Beau(word));
        if (way == 1)
            solve1(v);
        else
            solve2(v);
        cout << endl;
    }
};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Standize x;
        x.input();
        x.solve();
    }

    return 0;
}