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

void preorder(Node *root)
{

    if (root == NULL)
        return;
    cout << root->val << " ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(Node *root)
{

    if (root == NULL)
        return;
    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
}

void postorder(Node *root)
{

    if (root == NULL)
        return;
    inorder(root->left);
    inorder(root->right);
    cout << root->val << " ";
}

void nthlevel(Node *root, int n, int level)
{
    if (root == NULL)
        return;
    if (n == level)
    {

        cout << root->val << " ";
        return;
    }
    nthlevel(root->right, n + 1, level);
    nthlevel(root->left, n + 1, level);
}
int levels(Node* root){
     if(root==NULL) return 0;
    return 1 + max(levels(root->left), levels(root->right));
}

void levelorder(Node* root){
    int n = levels(root);
    for(int i = 1; i<=n; i++){
        nthlevel(root, 1, i);
        cout << endl;
    }
}

int main()
{

    Node *a = new Node(1);
    Node *b = new Node(2);
    Node *c = new Node(3);
    Node *d = new Node(4);
    Node *e = new Node(5);
    Node *f = new Node(6);
    Node *g = new Node(7);
    Node *h = new Node(8);
    Node *i = new Node(9);
    Node *j = new Node(10);
    Node *k = new Node(11);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    d->left = h;
    e->left = i;
    e->right = j;
    g->left = k;

    preorder(a);
    cout << endl;
    inorder(a);
    cout << endl;
    postorder(a);
    cout << endl;

    nthlevel(a,1,3);
    cout << endl;

    levelorder(a);

    cout << endl;
    return 0;
}