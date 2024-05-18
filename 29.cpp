#include <bits/stdc++.h>
using namespace std;

class Solve
{
private:
    string s1, s2;
    vector<string> res;

public:
    void input()
    {
        getline(cin, s1);
        getline(cin, s2);
    }

    void solve()
    {
        set<string> se1, se2;
        string word;
        stringstream ss1(s1);
        stringstream ss2(s2);
        while (ss1 >> word)
            se1.insert(word);
        while (ss2 >> word)
            se2.insert(word);

        for (auto it1 : se1)
        {
            int ok = 0;
            for (auto it2 : se2)
            {
                if (it1 == it2)
                {
                    ok = 1;
                    break;
                }
            }
            if (ok == 0)
                res.push_back(it1);
        }

        for (auto it : res)
            cout << it << ' ';
        cout << endl;
    }
};

int main()
{
    int t;
    cin >> t;
    cin.ignore(); // consume newline character left in the buffer
    while (t--)
    {
        Solve x;
        x.input();
        x.solve();
    }
    return 0;
}