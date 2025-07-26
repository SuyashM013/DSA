#include <iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};


void displayTree(Node* root){

    if(root == NULL) return;
    cout << root->val << " ";
    displayTree(root->left);
    displayTree(root->right);

}

int TreeSum(Node* root){
    
    if(root == NULL) return 0;
    return root->val + TreeSum(root->left) + TreeSum(root->right);
    

}

int size(Node* root){
    if(root == NULL) return 0;
    return 1 + size(root->left)+size(root->right);
}

int MaxNode(Node* root){
    if(root==NULL) return INT16_MIN;
    return max(root->val, max(MaxNode(root->left), MaxNode(root->right)));

}

int levels(Node* root){
     if(root==NULL) return 0;
    return 1 + max(levels(root->left), levels(root->right));
}

int main()
{

    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(20);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(7);
    Node* h = new Node(8);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    g->left = h;

    displayTree(a);
    cout << endl;

    cout << TreeSum(a) << endl;
    cout << size(a) << endl;
    cout << MaxNode(a) << endl;
    cout << levels(a) << endl;




    


    cout << endl;
    return 0;
}