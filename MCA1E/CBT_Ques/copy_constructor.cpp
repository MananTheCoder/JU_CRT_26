#include <bits/stdc++.h>
using namespace std;

class Box
{
public:
    int val;
    Box(int v) : val(v) { cout << "C\n"; }
    Box(const Box &b) : val(b.val) { cout << "CP\n"; }
};

Box getBox()
{
    Box b(5);
    cout << &b << "\n";
    // Box b_copy(b);
    return b;
}

int main()
{
    Box x = getBox();
    cout << &x << "\n";
}