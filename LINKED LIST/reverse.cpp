#include <iostream>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    // ListNode* getNode(ListNode* head, int idx) {
    //     ListNode* temp = head;
    //     for (int i = 1; i <= idx; i++) {
    //         temp = temp->next;
    //     }
    //     return temp;
    // }
    ListNode *reverseList(ListNode *head)
    {

        // RECURSION
        if (head == NULL || head->next == NULL)
            return head;

        ListNode *newHead = reverseList(head->next);
        head->next->next = head;
        head->next = NULL;
        return newHead;

        // O(N)
        // ListNode* curr = head;
        // ListNode* prev = NULL;
        // ListNode* nex = head;

        // while(curr){
        //     nex = curr -> next;
        //     curr ->next = prev;
        //     prev = curr;
        //     curr = nex;
        // }
        // return prev;

        // O(N^2)

        // int n = 0;
        // ListNode* temp = head;

        // while (temp != NULL) {
        //     temp = temp->next;
        //     n++;
        // }
        // int i = 0;
        // int j = n - 1;
        // while (i < j) {
        //     ListNode* left = getNode(head, i);
        //     ListNode* right = getNode(head, j);
        //     int t = left->val;
        //     left->val = right->val;
        //     right->val = t;
        //     i++;
        //     j--;
        // }
        // return head;
    }
};

int main()
{
    cout << endl;
    return 0;
}
