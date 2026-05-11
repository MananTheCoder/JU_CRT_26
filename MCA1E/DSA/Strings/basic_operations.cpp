#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> vi;

#define forn(i, n) for (int i = 0; i < n; i++)

vector<int> input_vi()
{
    int n;
    cin >> n;
    vi v(n);
    forn(i, n)
    {
        cin >> v[i];
    }
    return v;
}

void print_vi(const vi &v)
{
    forn(i, v.size())
    {
        cout << v[i] << '\t';
    }
    cout << "\n";
}

void string_traversal(string s)
{
    // for (int i = 0; i < s.size(); i++)
    // {
    //     cout << s[i];
    // }
    // for (char c : s)
    // {
    //     cout << c;
    // }
    // using iterators
    for (string::iterator itr = s.begin(); itr != s.end(); itr++)
    {
        cout << (*itr);
    }
    cout << "\n";
}

void searching_in_string(string s)
{
    s = "The\n";
    // string f = "don";
    // cout << (s.find(f) == string::npos) << "\n";
    // if (s.find(f) == )
}

void fun_functions()
{
    string a = "Hello CSE people!", b = "MCA";
    // swap(a, b);
    // b.swap(a);
    // a.resize(20);
    // a.replace(6, 3, b);
    cout << (a < b) << "\n"; // null character
    // cout << a << "\n";
}

void solve()
{
    string s = "string::iterator";
    // cin >> s;
    // getline(cin, s);
    // cout << s.length() << "\n";
    // s.size();
    // cout << s[20] << "\n";
    // cout << s.at(20) << "\n";
    // string_traversal(s);
    // searching_in_string(s);
    fun_functions();
}

int main()
{
    solve();
}