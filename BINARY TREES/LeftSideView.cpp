#include <queue>
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

int levels(Node *root)
{
    if (root == NULL)
        return 0;
    return 1 + max(levels(root->left), levels(root->right));
}

void preorder(Node *root, vector<int> &ans, int level)
{
    if (root == NULL)
        return;
    ans[level] = root->val;
    preorder(root->right, ans, level + 1);
    preorder(root->left, ans, level + 1);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, INT16_MIN, 6, 7, INT16_MIN, 8, INT16_MIN, 9, 10, INT16_MIN, 11, INT16_MIN, 12, INT16_MIN, 13, INT16_MIN, 14, 15, 16, INT16_MIN, 17, INT16_MIN, INT16_MIN, 18, INT16_MIN, 19, INT16_MIN, INT16_MIN, INT16_MIN, 20, 21, 22, 23, INT16_MIN, 24, 25, 26, 27, INT16_MIN, INT16_MIN, 28, INT16_MIN, INT16_MIN};
    int n = sizeof(arr) / sizeof(arr[0]);

    Node *root = Construct(arr, n);

    vector<int> ans(levels(root), 0);
    // levelorder(root, ans);

    preorder(root, ans, 0);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    cout << endl;
    return 0;
}