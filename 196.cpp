#include <bits/stdc++.h>
using namespace std;
string fe(string word)
{
    word[0] = toupper(word[0]);

    for (int i = 1; i < word.size(); i++)
        word[i] = tolower(word[i]);
    return word;
}
string standard(string name)
{
    stringstream ss(name);
    string word;
    string res = "";
    while (ss >> word)
    {
        res += fe(word) + " ";
    }
    return res;
}
struct SinhVien
{
    string code = "B20DCCN001", name, cla, date;
    float grade;

    friend istream &operator>>(istream &in, SinhVien &x)
    {
        getline(in, x.name);
        in >> x.cla >> x.date >> x.grade;
        return in;
    }

    friend ostream &operator<<(ostream &out, SinhVien x)
    {
        x.name = standard(x.name);
        out << x.code << " " << x.name << x.cla << " ";
        if (x.date[1] == '/')
            x.date = "0" + x.date;
        if (x.date[4] == '/')
            x.date.insert(3, "0");
        out << x.date << " " << fixed << setprecision(2) << x.grade;
        return out;
    }
};

int main()
{
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}
