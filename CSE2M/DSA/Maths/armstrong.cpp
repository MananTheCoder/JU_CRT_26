#include <bits/stdc++.h>
using namespace std;

int no_of_digits(int n)
{
    return 1 + log10(n);
}

int sum_powers(int n, int x) // O(log10(n))
{
    int sum = 0; // O(1)
    while (n)
    {
        sum += pow((n % 10), x); // O(1)
        n /= 10;                 // O(1)
    }
    return sum;
}

bool isArmstrong(int n)
{
    int x = no_of_digits(n);
    int sum = sum_powers(n, x);
    return n == sum;
}

void list_armstrong(int range)
{
    for (int i = 1; i <= range; i++)
    {
        if (isArmstrong(i))
        {
            cout << i << "\t";
        }
    }
    cout << "\n";
}

int main()
{
    int range;
    cin >> range;
    list_armstrong(range);
}