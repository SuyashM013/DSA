#include <iostream>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

void displayTree(Node *root)
{

    if (root == NULL)
        return;
    cout << root->val << " ";
    displayTree(root->left);
    displayTree(root->right);
}

Node *searchBST(Node *root, int val)
{
    if (root == NULL)
        return NULL;
    else if (root->val == val)
        return root;
    else if (root->val > val)
        return searchBST(root->left, val);
    else
        return searchBST(root->right, val);
}

int main()
{
    cout << endl;
    return 0;
}
