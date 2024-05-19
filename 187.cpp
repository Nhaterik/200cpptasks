#include <bits/stdc++.h>
using namespace std;
struct Point
{
    double x, y;
};
void input(Point &X)
{
    cin >> X.x >> X.y;
}
double distance(Point A, Point B)
{
    double X = B.x - A.x, Y = B.y - A.y;
    return sqrt(X * X + Y * Y);
}
int main()
{
    struct Point A, B;
    int t;
    cin >> t;
    while (t--)
    {
        input(A);
        input(B);
        cout << fixed << setprecision(4) << distance(A, B) << endl;
    }
    return 0;
}
