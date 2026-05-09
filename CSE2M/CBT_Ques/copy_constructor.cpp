#include <bits/stdc++.h>
using namespace std;

class Box
{
public:
    int val;
    Box() {}
    Box(int v) : val(v) { cout << "C" << " "; }
    Box(const Box &b) : val(b.val) { cout << "CP" << " "; }
};

Box getBox()
{
    Box b(5);
    return b;
}

int main()
{
    Box x = getBox();
    cout << "\n";
}