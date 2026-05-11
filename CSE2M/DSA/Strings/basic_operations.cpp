#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

#define forn(i, n) for (int i = 0; i < n; i++)

vi input_vi()
{
    int n;
    cin >> n;
    vi v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    return v;
}

void print_vi(vi &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << "\t";
    }
    cout << "\n";
}

void string_travel(string &s)
{
    // Way 1
    // for (int i = 0; i < s.size(); i++)
    // forn(i, s.size())
    // {
    //     cout << s[i];
    // }

    // way 2
    // for (char c : s)
    // {
    //     cout << c;
    // }

    // way 3
    for (string::iterator itr = s.begin(); itr != s.end(); itr++)
    {
        cout << (*itr);
    }
    cout << "\n";
}

void letshavefun(string s)
{
    //
}

void search(string s)
{
    string f = "MCA";
    cout << (s.find(f) == string::npos) << "\n";
}

void funny_func()
{
    // string s1 = "Good morning students!", s2 = "Afternoon";
    // swap(s1, s2);
    // s1.swap(s2); // swap(s1,s2);
    // s2.swap(s1);
    // s1.replace(5, 7, s2);
    // s1.resize(10);

    // cout << (s1.at(8) == '\0') << "\n";
    // cout << (s1 > s2) << "\n";
}

void solve()
{
    string s;
    s = "Hello Class CSE2M!";
    // cin >> s;
    // string s2 = "Apple";
    getline(cin, s);
    // s[0] = 'Y';
    // cout << s[s.length() - 1] << "\n";
    // string_travel(s);
    // search(s2);
    funny_func();
}

int main()
{
    solve();
}