#include <bits/stdc++.h>
using namespace std;

bool isPrime(long n)
{
    if (n < 2) // O(1)
    {
        return false;
    }
    for (long i = 2; i <= n / 2; i++) // O(n) -> O(n/2)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

bool isPrime_faster(long n) // O(sqrt(n)/2)
{
    if (n < 2) // O(1)
    {
        return false;
    }
    if (n % 2 == 0) // O(1)
    {
        return (n == 2);
    }
    for (long i = 3; i <= n / i; i += 2) // O(sqrt(n)) -> O(sqrt(n)/2)
    {
        if (n % i == 0) // O(1)
        {
            // cout << i << "\n";
            // n /= i;
            return false;
        }
    }
    return true; // O(1)
}

int main()
{
    long n;
    cin >> n;
    cout << n << "\n";
    string ans = isPrime_faster(n) ? "Prime" : "Not Prime";
    cout << ans << "\n";
}