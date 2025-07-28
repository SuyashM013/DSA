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

int main()
{

    //  Node *a = new Node(1);
    //     Node *b = new Node(2);
    //     Node *c = new Node(3);
    //     Node *d = new Node(4);
    //     Node *e = new Node(5);
    //     Node *f = new Node(6);
    //     Node *g = new Node(7);
    //     Node *h = new Node(8);
    //     Node *i = new Node(9);
    //     Node *j = new Node(10);
    //     Node *k = new Node(11);

    //     a->left = b;
    //     a->right = c;
    //     b->left = d;
    //     b->right = e;
    //     c->left = f;
    //     c->right = g;
    //     d->left = h;
    //     e->left = i;
    //     e->right = j;
    //     g->left = k;

    int arr[] = {1, 2, 3, 4, 5, 6, INT16_MIN, 6, INT16_MIN, INT16_MIN, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    Node *root = Construct(arr, n);

    levelorderQueue(root);

    cout << endl;
    return 0;
}