#include <queue>
#include <iostream>
#include <unordered_map>
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

void TopView(Node *root)
{
    unordered_map<int, int> m;            // level, root->val
    queue<pair<Node *, int>> q;           // root, level
    pair<Node *, int> r;
    r.first = root;
    r.second = 0;
    q.push(r);
    m[0] = root->val;
    while (q.size() > 0)
    {
        Node *temp = (q.front().first);
        int level = (q.front().second);
        q.pop();
        if (m.find(level) == m.end())
        {
            m[level] = temp->val;
        }
        if (temp->left)
        {
            pair<Node *, int> p;
            p.first = temp->left;
            p.second = level - 1;
            q.push(p);
        }
        if (temp->right)
        {
            pair<Node *, int> p;
            p.first = temp->right;
            p.second = level + 1;
            q.push(p);
        }
    }

    int minLevel = INT16_MAX;
    int maxLevel = INT16_MIN;
    for (auto x : m)
    {
        int level = x.first;
        minLevel = min(minLevel, level);
        maxLevel = max(maxLevel, level);
    }
    for(int i = minLevel; i<=maxLevel; i++){
        cout << m[i] << " ";
    }
    cout << endl;
}

int main()
{
    // int arr[] = {1, 2, 3, 4, 5, INT16_MIN, 6, 7, INT16_MIN, 8, INT16_MIN, 9, 10, INT16_MIN, 11, INT16_MIN, 12, INT16_MIN, 13, INT16_MIN, 14, 15, 16, INT16_MIN, 17, INT16_MIN, INT16_MIN, 18, INT16_MIN, 19, INT16_MIN, INT16_MIN, INT16_MIN, 20, 21, 22, 23, INT16_MIN, 24, 25, 26, 27, INT16_MIN, INT16_MIN, 28, INT16_MIN, INT16_MIN};

    int arr[] = {1, 2, 3, 4, 5, INT16_MIN, 6, INT16_MIN, INT16_MIN, 7, 8, INT16_MIN, INT16_MIN};

    int n = sizeof(arr) / sizeof(arr[0]);

    Node *root = Construct(arr, n);

    TopView(root);

    cout << endl;
    return 0;
}