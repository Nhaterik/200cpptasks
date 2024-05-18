#include <iostream>
using namespace std;

int modInverse(int a, int m)
{

    for (int x = 1; x < m; x++)
        if ((a * x) % m == 1)
            return x;
    return -1;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int a, m;
        cin >> a >> m;
        cout << modInverse(a, m) << endl;
    }
    return 0;
}