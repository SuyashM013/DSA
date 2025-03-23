// Leetcode - 21

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
        ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    
            // O(1)
            ListNode* c = new ListNode(-1);
            ListNode* tempc = c;
    
            while(list1 != NULL && list2 != NULL){
                if(list1->val >= list2->val){
                    tempc -> next = list2;
                    list2 = list2->next;
                    tempc = tempc->next;
                }
                else{
                     tempc -> next = list1;
                    list1 = list1->next;
                    tempc = tempc->next;
                }
            }
            if (list1 == NULL) {
                tempc->next = list2;
            }
            else{
                tempc->next = list1;
            }
    
            return c->next;
    
    
            ListNode* temp1 = list1;
            ListNode* temp2 = list2;
            ListNode* c = new ListNode(700) ;
            ListNode* temp3 = c;
    
            while (temp1 != NULL && temp2 != NULL) {
                if (temp1->val >= temp2->val) {
                    ListNode* t = new ListNode(temp2->val);
                    temp3->next = t;
                    temp3 = t;
                    temp2 = temp2 ->next;
                } else {
                    ListNode* t = new ListNode(temp1->val);
                    temp3->next = t;
                    temp3 = t;
                    temp1 = temp1->next;
                }
                
            }
    
            if (temp1 == NULL) {
                temp3->next = temp2;
            }
            else{
                temp3->next = temp1;
            }
            
            return c->next;
        }
    };



using namespace std;
int main()
{
    cout << endl;
    return 0;
}