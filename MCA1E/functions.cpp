#include <bits/stdc++.h>
using namespace std;

// void swap(int a, int b) // pass by value
// {
//     int temp = a;
//     a = b;
//     b = temp;
// }

void swap(int &a, int &b) // call by reference.
{
    cout << "Reference func. called.\n";
    int temp = a;
    a = b;
    b = temp;
}

void swap(int *ptr_a, int *ptr_b)
{
    cout << "Pointer func. called.\n";
    int temp = *ptr_a;
    *ptr_a = *ptr_b;
    *ptr_b = temp;
}

void fun_with_pointers(int *&ptr_a, int *&ptr_b)
{
    cout << "Having fun with pointers.\n";
    int *temp = ptr_a;
    ptr_a = ptr_b;
    ptr_b = temp;
}

int main()
{
    int a, b;
    cin >> a >> b;
    int *ptr_a = &a, *ptr_b = &b;
    fun_with_pointers(ptr_a, ptr_b);
    // swap(&a, &b);
    cout << a << "\t" << b << "\n";
    cout << (*ptr_a) << '\t' << (*ptr_b) << "\n";
}