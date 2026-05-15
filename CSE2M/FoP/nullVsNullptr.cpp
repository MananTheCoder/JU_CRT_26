#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

// void func(int a)
// {
//     cout << "Int found.\n";
// }

void func(char *a)
{
    cout << "Char pointer found.\n";
}

void solve()
{
    int a = 1;
    char c = 'c';
    func(NULL);
    // func(&c);
}

int main()
{
    solve();
}