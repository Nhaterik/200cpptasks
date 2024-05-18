#include <bits/stdc++.h>
using namespace std;
#define PI 3.141592653589793238
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        double a1, a2, b1, b2, c1, c2;
        cin >> a1 >> a2 >> b1 >> b2 >> c1 >> c2;
        double ab1 = b1 - a1, ab2 = b2 - a2, ac1 = c1 - a1, ac2 = c2 - a2, bc1 = c1 - b1, bc2 = c2 - b2;
        double ab = sqrt(ab1 * ab1 + ab2 * ab2), ac = sqrt(ac2 * ac2 + ac1 * ac1), bc = sqrt(bc1 * bc1 + bc2 * bc2);
        double area = sqrt((ab + ac + bc) * (ab - ac + bc) * (-ab + ac + bc) * (ab + ac - bc)) / 4;
        double r = (ab * ac * bc) / (4 * area);
        if (ab <= 0 || bc <= 0 || ac <= 0 || ac + bc <= ab || ab + ac <= bc || ab + bc <= ac)
            cout << "INVALID";
        else
            cout << fixed << setprecision(3) << (double)(PI * r * r);
        cout << endl;
    }
    return 0;
}