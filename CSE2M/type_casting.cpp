#include <bits/stdc++.h>
using namespace std;

void c_style_typecasting()
{
    // int e = (int)e;
    // cout << (f1 + a) << "\n";
    // cout << a << "\n";
    int a = 2;
    float f1 = 2.6, f2 = 1.7;
    int b = (int)f1;
    int c = int(f1);
    cout << b << "\t" << c << "\n";
    int d = int(b);
}

void char_int_typecasting()
{
    char c1 = 'B', c2 = '1'; // 66 * 49 = 3234
    int a = 97 + 256 * 49;
    cout << char(a) << "\n";
}

int main()
{
    char_int_typecasting();
}