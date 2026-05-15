#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

#define forn(i, n) for (int i = 0; i < n; i++)

struct Node
{
    // public:
    int data;
    struct Node *right, *left;
    Node() : right(nullptr), left(nullptr) {}
    Node(int d) : data(d), right(nullptr), left(nullptr) {}
};

Node *dummy_tree()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    return root;
}

void print_inorder(Node *root)
{
    if (!root)
    {
        return;
    }
    print_inorder(root->left);
    cout << root->data << "\t";
    print_inorder(root->right);
}

void print_preoder(Node *root)
{
    if (!root)
    {
        return;
    }
    cout << root->data << "\t";
    print_preoder(root->left);
    print_preoder(root->right);
}

void print_postrder(Node *root)
{
    if (!root)
    {
        return;
    }
    print_postrder(root->left);
    print_postrder(root->right);
    cout << root->data << "\t";
}

void solve()
{
    Node *root = dummy_tree();
    print_postrder(root);
    cout << "\n";
}

int main()
{
    solve();
}