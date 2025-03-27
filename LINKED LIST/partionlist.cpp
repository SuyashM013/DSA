// leetcode - 86 & 328

// same logic and method

#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
    public:
        ListNode* oddEvenList(ListNode* head) {
            ListNode* odd = new ListNode(100);
            ListNode* even = new ListNode(100);
            ListNode* tempo = odd;
            ListNode* tempe = even;
            ListNode* temp = head;
            int i = 1;
            while (head != NULL) {
                if (i % 2 == 0) {
                    tempe->next = head;
                    head = head->next;
                    tempe = tempe->next;
                } else {
                    tempo->next = head;
                    head = head->next;
                    tempo = tempo->next;
                }
                i++;
            }
            tempo->next = NULL;
            tempe->next = NULL;
    
            tempo->next = even->next;
            return odd->next;
        }
    };
int main()
{
    cout << endl;
    return 0;
}