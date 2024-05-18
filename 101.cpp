#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        char c;
        cin >> c;
        if (c >= 'A' && c <= 'Z')
            cout << (char)(c + 32) << endl;
        else
            cout << (char)toupper(c) << endl;
    }
    return 0;
}
