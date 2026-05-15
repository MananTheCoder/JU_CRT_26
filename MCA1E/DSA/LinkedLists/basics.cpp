#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> vi;

#define forn(i, n) for (int i = 0; i < n; i++)

struct Node
{
    int data;
    struct Node *next;
    Node() : next(nullptr) {}
    Node(int d) : data(d), next(nullptr) {}
};

void solve()
{
    struct Node *head = new Node(1);
    // struct Node *node2 = new Node(2);
    head->next = new Node(2);
    head->next->next = new Node(3);
    cout << head->next->data << "\n";
}

int main()
{
    solve();
}