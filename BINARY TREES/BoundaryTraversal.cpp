#include <iostream>
#include <queue>
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

Node *Construct(int arr[], int n)
{
    queue<Node *> q;
    Node *root = new Node(arr[0]);
    q.push(root);
    int i = 1;
    int j = 2;
    while (!q.empty() && i < n)
    {
        Node *temp = q.front();
        q.pop();

        Node *l;
        Node *r;

        if (arr[i] != INT16_MIN)
            l = new Node(arr[i]);
        else
            l = NULL;

        if (j != n && arr[j] != INT16_MIN)
            r = new Node(arr[j]);
        else
            r = NULL;

        temp->left = l;
        temp->right = r;

        if (l != NULL)
            q.push(l);
        if (r != NULL)
            q.push(r);

        i += 2;
        j += 2;
    }
    return root;
}

void levelorderQueue(Node *root)
{
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        cout << temp->val << " ";
        if (temp->left != NULL)
            q.push(temp->left);
        if (temp->right != NULL)
            q.push(temp->right);
    }
    cout << endl;
}

void LeafNode(Node *root)
{
    if (root == NULL)
        return;

    if (root->left == NULL && root->right == NULL)
        cout << root->val << " ";
    // a.push_back(root->val);

    LeafNode(root->left);
    LeafNode(root->right);
}

void leftBoundary(Node *root)
{
    if (root == NULL)
        return;
    if (root->left != NULL || root->right != NULL)
        cout << root->val << " ";

    leftBoundary(root->left);
    if (!root->left)
        leftBoundary(root->right);
}
void rightBoundary(Node *root)
{

    if (root == NULL)
        return;
    rightBoundary(root->right);
    if (root->right == NULL)
        rightBoundary(root->left);
    if (root->right != NULL || root->left != NULL)
        cout << root->val << " ";
}

void BoundaryTraversal(Node *root)
{
    leftBoundary(root);
    LeafNode(root);
    rightBoundary(root->right);
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
int levels(Node *root)
{
    if (root == NULL)
        return 0;
    return 1 + max(levels(root->left), levels(root->right));
}
void levelorder(Node *root)
{
    int n = levels(root);
    for (int i = 1; i <= n; i++)
    {
        nthlevel(root, 1, i);
        cout << endl;
    }
}

int main()
{

    // int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, INT16_MIN, INT16_MIN, INT16_MIN, 9, INT16_MIN, INT16_MIN, 10};
    int arr[] = {1, 2, 3, 4, 5, INT16_MIN, 6, 7, INT16_MIN, 8, INT16_MIN, 9, 10, INT16_MIN, 11, INT16_MIN, 12, INT16_MIN, 13, INT16_MIN, 14, 15, 16, INT16_MIN, 17, INT16_MIN, INT16_MIN, 18, INT16_MIN, 19, INT16_MIN, INT16_MIN, INT16_MIN, 20, 21, 22, 23, INT16_MIN, 24, 25, 26, 27, INT16_MIN, INT16_MIN, 28, INT16_MIN, INT16_MIN};
    int n = sizeof(arr) / sizeof(arr[0]);

    Node *root = Construct(arr, n);

    // LeafNode(root);
    // cout << endl;

    // leftBoundary(root);
    // cout << endl;

    // rightBoundary(root);
    // cout << endl;
    levelorder(root);
    cout << endl
         << endl;

    BoundaryTraversal(root);

    cout << endl;
    return 0;
}