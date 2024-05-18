#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)

    {
        double x1, x2, y1, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        double X = x1 - x2;
        double Y = y1 - y2;
        cout << fixed << setprecision(4) << sqrt(X * X + Y * Y) << endl;
    }

    return 0;
}