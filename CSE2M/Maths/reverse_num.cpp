#include <bits/stdc++.h>
using namespace std;

int rev(int n) // O(log10(n))
{
    int rev = 0; // O(1)
    while (n)
    {
        rev = rev * 10 + (n % 10); // O(1)
        n /= 10;                   // O(1)
    }
    return rev;
}

int main()
{
    int n;
    cin >> n;
    cout << rev(n) << "\n";
    // cout << (-4321 % 10) << "\n";
}