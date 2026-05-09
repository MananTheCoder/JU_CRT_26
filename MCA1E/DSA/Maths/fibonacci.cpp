#include <bits/stdc++.h>
using namespace std;

int fib(int n)
{
    int prev2 = 0, prev = 1;
    for (int i = 0; i < n - 1; i++)
    {
        int curr = prev2 + prev;
        prev2 = prev;
        prev = curr;
    }

    return prev;
}

int main()
{
    int n;
    cin >> n;
    cout << fib(n) << "\n";
}