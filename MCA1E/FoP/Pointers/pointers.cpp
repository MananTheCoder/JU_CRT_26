#include <bits/stdc++.h>
using namespace std;

void basics()
{
    double a = 5, b = 6;
    double *ptr_a = &a, *ptr_b = &b; // (double *)
    // cout << ptr_a << "\n";
    // cout << ptr_b - ptr_a << "\n";
    *ptr_a = 7;
    cout << a << "\n";
}

void pointer_in_array()
{
    int n = 5;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        a[i] = 10 + 2 * i;
    } // 10 12 14 16 18
    int *ptr_a = &a[0];
    int *ptr_end = &a[4];
    ptr_end -= 3;

    // ptr_a += 4;
    // cout << *(ptr_a + 1) << "\n";
    cout << (ptr_end == a) << '\n';
    // cout << ptr_end - ptr_a << "\n";
}

void array_of_pointers()
{
    int n = 5;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        a[i] = 10 + 2 * i;
    } // 10 12 14 16 18
    int *ptrs[n];
    for (int i = 0; i < n; i++)
    {
        ptrs[i] = &a[i];
    }
    // ptr_a[0] = (*ptr_a)
    // *(ptrs+n)[-1]
    for (int i = n; i > 0; i--)
    {
        cout << ptrs[i][-1] << "\t";
    }
    cout << "\n";
    // cout << (*ptrs[3]) << "\n";
}

int main()
{
    // basics();
    map<int, int> m;
    array_of_pointers();
}