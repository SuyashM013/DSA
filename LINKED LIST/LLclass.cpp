#include <iostream>
using namespace std;

class Node
{ // user defined data type

public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

class LinkedList
{ // user defined data structure
public:
    Node *head;
    Node *tail;
    int size;

    LinkedList()
    {
        head = NULL;
        tail = NULL;
        size = 0;
    }

    void insertAtEnd(int val)
    {
        Node *temp = new Node(val);
        if (size == 0)
            head = tail = temp;
        else
        {
            tail->next = temp;
            tail = temp;
        }
        size++;
    }

    void insertAtHead(int val){
        Node* temp = new Node(val);
        if(size == 0) head = tail = temp;
        else{
            temp->next = head;
            head = temp;
        }
        size++;
    }

    void insertAtIdx(int idx, int val){
        if(idx <0 || idx > size) cout << "Invalid Index" << endl;
        else if(idx == 0)   insertAtHead(val);

        else if(idx == size)insertAtEnd(val);
        else{
        Node* t = new Node(val);
        Node* temp = head;

        for(int i = 0; i<idx-1; i++){
            temp = temp->next;
        }
        t->next = temp->next;
        temp->next =t;
        size++;
        }
        
    }

    void getAtIdx(int idx){
        if(idx <0 || idx > size) cout << "Invalid Index" << endl;
        else if (idx == 0) cout << head->val << endl;
        else{
            Node* temp = head;
            for(int i = 0; i<=idx; i++){
                temp = temp->next;
            }
            cout << temp->val << endl;
        }
    }

    void deleteAtHead(){
        if(size == 0) cout << "List is Empty" << endl;
        head = head -> next;
        size--;
    }

    void deleteAtTail(){
        if(size == 0) cout << "List is Empty" << endl;
        Node* temp = head;
        while(temp->next != tail){
            temp = temp->next;
        }
        temp->next = NULL;
        tail = temp;
        size--;
    }

    void deleteAtIndex(int idx){
        if(idx > size || idx <0) cout << "Invalid Index" << endl;
        else if(idx == 0) deleteAtHead();
        else if(idx == size-1) deleteAtTail();
        else{
            Node* temp = head;
            for(int i = 0; i<idx-1; i++){
                temp = temp-> next;
            }
            temp->next = temp->next->next;
            size--;
        }
    }

    void display()
    {
        Node* temp = head;
        while (temp != NULL)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main()
{
    LinkedList ll ;

    ll.insertAtEnd(10); // 10 -> NULL
    ll.display();  
    ll.insertAtEnd(20); // 10 -> 20 -> NULL
    ll.display();           
    ll.insertAtEnd(30); // 10 -> 20 -> 30 -> NULL
    ll.display(); 

    ll.insertAtHead(50); // 50 -> 10 -> 20 -> 30 -> NULL
    ll.display();
    ll.insertAtHead(70); // 70 -> 50 -> 10 -> 20 -> 30 -> NULL
    ll.display();

    ll.insertAtIdx(0,100); // 100 -> 70 -> 50 -> 10 -> 20 -> 30 -> NULL
    ll.display();
    ll.insertAtIdx(3, 200);// 100 -> 70 -> 50 -> 200 -> 10 -> 20 -> 30 -> NULL
    ll.display();

    ll.deleteAtHead(); // 70 -> 50 -> 200 -> 10 -> 20 -> 30 -> NULL
    ll.display();
    ll.deleteAtTail(); // 70 -> 50 -> 200 -> 10 -> 20 -> NULL
    ll.deleteAtIndex(2); // 70 -> 50 -> 10 -> 20 -> NULL
    ll.display();


    cout << endl;

    // ll.getAtIdx(0);
    // ll.display();

    cout << endl;
    return 0;
}
