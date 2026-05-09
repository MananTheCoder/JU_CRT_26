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

bool sumOfNumberAndReverse(int n)
{
    for (int i = 0; i <= n; i++)
    {
        if (i + make_rev(i) == n)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    cout << make_rev(n) << "\n";
}