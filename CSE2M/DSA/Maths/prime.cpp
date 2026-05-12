#include <bits/stdc++.h>
using namespace std;

bool isPrime(long n)
{
    if (n < 2)
    {
        return false;
    }
    if (n % 2 == 0) // O(1)
    {
        return (n == 2);
    }
    for (long i = 2; i * i <= n; i += 2)
    { // O(n) -> O(sqrt(n)) -> O(sqrt(n))/2
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

bool isPrime_fastest(long n) // O(sqrt(n)/3)
{
    if (n < 2) // O(1)
    {
        return false;
    }
    if (n < 4) // O(1)
    {
        return true;
    }
    if (n % 2 == 0 || n % 3 == 0) // O(1)
    {
        return false;
    }
    for (int i = 5; i <= n / i; i += 6) // O(sqrt(n)/6) * 2 = O(sqrt(n)/3)
    {
        if (n % i == 0 || n % (i + 2) == 0) // O(1)*2
        {
            return false;
        }
    }
    return true; // O(1)
}

int main()
{
    long n;
    cin >> n;
    cout << isPrime(n) << "\n";
}