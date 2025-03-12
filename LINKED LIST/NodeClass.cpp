#include <iostream>
using namespace std;

class Node{
    public:
    
    int val;
    Node* next;

    Node(int val){
        this->val = val;
        this->next = NULL;
    }

};

int main()
{
    // 10 20 30 40
    Node a(10);
    // a.val = 10;

    Node b(20);
    // b.val = 10;

    Node c(30);
    // c.val = 10;/

    Node d(40);
    // d.val = 10;

// forming linked list and connect the addressess
    a.next = &b;
    b.next = &c;
    c.next = &d;
    // d.next = NULL;


    // cout << a.val << endl;
    // cout << b.val << endl;

    // cout << (a.next)-> val << endl;
    // cout << ((a.next)->next) -> val << endl;
    // cout << ((a.next->next)->next) -> val << endl;
    // cout << (((a.next->next -> next)) -> next) -> val;

    cout << endl <<endl;
    cout << "-----------------------------------------------";

    Node temp = a;
    while(1){
        cout << temp.val << " ";
        if(temp.next == NULL) break;
        temp = *(temp.next);
    }



    cout << endl;
    return 0;
}