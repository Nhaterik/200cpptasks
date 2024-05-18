#include <bits/stdc++.h>
using namespace std;
static int cn = 0;
void standard(string &s)
{
    int len = s.size();
    for (int i = 0; i < len; i++)
        s[i] = tolower(s[i]);
    stringstream ss(s);
    string word, res = "";
    while (ss >> word)
    {
        word[0] = toupper(word[0]);
        res += word + ' ';
    }
    res.erase(res.size() - 1, 1);
    s = res;
}
class SinhVien
{
public:
    string ten, lop, ns, ma = "B20DCCN0";
    float gpa;

public:
    friend istream &operator>>(istream &is, SinhVien &a)
    {
        cn++;
        scanf("\n");
        a.ma += string(2 - to_string(cn).size(), '0') + to_string(cn);
        getline(is, a.ten);
        getline(is, a.lop);
        getline(is, a.ns);
        if (a.ns[1] == '/')
            a.ns.insert(0, "0");
        if (a.ns[4] == '/')
            a.ns.insert(3, "0");
        standard(a.ten);
        is >> a.gpa;
        return is;
    }
    friend ostream &operator<<(ostream &os, SinhVien &a)
    {
        os << a.ma << ' ' << a.ten << ' ' << a.lop << ' ' << a.ns << ' ' << fixed << setprecision(2) << a.gpa << endl;
        return os;
    }
};
bool cmp(SinhVien &a, SinhVien &b)
{
    return a.gpa > b.gpa;
}
void sapxep(SinhVien ds[], int n)
{
    sort(ds, ds + n, cmp);
}

int main()
{
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for (i = 0; i < N; i++)
    {
        cin >> ds[i];
    }
    sapxep(ds, N);
    for (i = 0; i < N; i++)
    {
        cout << ds[i];
    }
    return 0;
}