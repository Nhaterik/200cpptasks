#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    string a = "ABBADCCABDCCABD";
    string b = "ACCABCDDBBCDDBB";

    while (test--)
    {
        string c;
        int n;
        cin >> n;
        if (n == 101)
            c = a;
        else
            c = b;
        int cn = 0;
        for (int i = 0; i < c.size(); i++)
        {
            char ch;
            cin >> ch;
            if (c[i] == ch)
                cn++;
        }
        cout << fixed << setprecision(2) << cn * (2.0 / 3) << endl;
    }
    return 0;
}
