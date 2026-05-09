#include <bits/stdc++.h>
using namespace std;

int make_rev(int n)
{
    int rev = 0;
    while (n)
    {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }

    return rev;
}

int main()
{
    int n;
    cin >> n;
    cout << make_rev(n) << "\n";
}