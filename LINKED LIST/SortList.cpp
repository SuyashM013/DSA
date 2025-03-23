// Leetcode  - 148
// SOrt the jumbled list

#include <iostream>
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution {
    public:
        ListNode* merge(ListNode* list1, ListNode* list2) {
    
            ListNode* c = new ListNode(-1);
            ListNode* tempc = c;
    
            while (list1 != NULL && list2 != NULL) {
                if (list1->val >= list2->val) {
                    tempc->next = list2;
                    list2 = list2->next;
                    tempc = tempc->next;
                } else {
                    tempc->next = list1;
                    list1 = list1->next;
                    tempc = tempc->next;
                }
            }
            if (list1 == NULL)
                tempc->next = list2;
            else
                tempc->next = list1;
    
            return c->next;
        }
    
        ListNode* sortList(ListNode* head) {
            ListNode* slow = head;
            ListNode* fast = head;
    
            // Base Case
            if (head == NULL || head->next == NULL)
                return head;
    
            // Find left Middle
            while (fast->next != NULL && fast->next->next != NULL) {
                slow = slow->next;
                fast = fast->next->next;
            }
            ListNode* a = head;
            ListNode* b = slow->next;
            slow->next = NULL;
    
            // Recursion
            a = sortList(a);
            b = sortList(b);
    
            ListNode* ans = merge(a, b);
            return ans;
        }
    };


using namespace std;
int main()
{
    cout << endl;
    return 0;
}