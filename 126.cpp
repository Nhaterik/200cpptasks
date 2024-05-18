// C++ Program to find largest prime
// factor of number
#include <bits/stdc++.h>
using namespace std;
// C++ Program to find largest prime
// factor of number
#include <bits/stdc++.h>
using namespace std;
void Factorise(long long n)
{

    while (n % 2 == 0)
    {

        n /= 2;
        cout << 2 << " ";
    }
    while (n % 3 == 0)
    {

        n /= 3;
        cout << 3 << " ";
    }
    for (int i = 5; i <= sqrt(n); i += 6)
    {
        while (n % i == 0)
        {

            n /= i;
            cout << i << " ";
        }
        while (n % (i + 2) == 0)
        {

            n /= (i + 2);
            cout << i + 2 << " ";
        }
    }
    if (n > 2)
        cout << n;
    cout << endl;
}

int main()
{
    int test;
    cin >> test;
    while (test--)
    {

        long long n;
        cin >> n;

        Factorise(n);
    }
}