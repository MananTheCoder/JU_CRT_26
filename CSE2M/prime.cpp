#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if (n < 2)
    {
        return false;
    }
    if (n % 2 == 0) // O(1)
    {
        return (n == 2);
    }
    for (int i = 3; i * i <= n; i += 2)
    { // O(n) -> O(sqrt(n)) -> O(sqrt(n))/2
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    cout << isPrime(n) << "\n";
}