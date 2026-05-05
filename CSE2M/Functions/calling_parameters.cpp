#include <bits/stdc++.h>
using namespace std;

// void swap(int &a, int b); // declaration

// void swap(int a, int b) // definition, passing by value
// {
//     int temp = a;
//     a = b;
//     b = temp;
// }

void swap(int &a, int &b) // passing by reference.
{
    cout << "Reference fn called\n";
    int temp = a;
    a = b;
    b = temp;
}

void swap(int *a, int *b)
{
    cout << "Pointer fn called\n";
    int temp = *a;
    // int *temp = *a;
    *a = *b;
    *b = temp;
}

void swap_pointers(int *&ptr_a, int *&ptr_b)
{
    cout << "Swap ptr fn called\n";
    int *temp = ptr_a;
    ptr_a = ptr_b;
    ptr_b = temp;
}

int main()
{
    int a, b;
    cin >> a >> b;
    int *ptr_a = &a, *ptr_b = &b;
    swap_pointers(ptr_a, ptr_b); // calling
    cout << a << "\t" << b << "\n";
}