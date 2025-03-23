// Leetcode 23 HARD

#include <iostream>
#include <vector>
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

    // TC kharab hai - O(nk^2)
        ListNode* ans(ListNode* list1, ListNode* list2) {
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
            if (list1 == NULL) {
                tempc->next = list2;
            } else {
                tempc->next = list1;
            }
            return c->next;
        }
        // lists -> arr (rename)
        ListNode* mergeKLists(vector<ListNode*>& arr) {
            ListNode* fans;
            
            if (arr.size() == 0) {
                return NULL;
            }
    
            while(arr.size() > 1){
                ListNode* a = arr[arr.size()-1];
                arr.pop_back();
                ListNode* b = arr[arr.size()-1];
                arr.pop_back();
                ListNode* c = ans(a,b);
    
                arr.push_back(c);
            }
    
            return arr[0];
            
            
        }

        // tc - O(Nk logk)
        ListNode* mergeKLists(vector<ListNode*>& arr) {
            ListNode* fans;
            
            if (arr.size() == 0) {
                return NULL;
            }
    
            while(arr.size() > 1){
                ListNode* a = arr[0];
                arr.erase(arr.begin());
                ListNode* b = arr[0];
                arr.erase(arr.begin());
                ListNode* c = ans(a,b);
    
                arr.push_back(c);
            }
    
            return arr[0];
            
            
        }
    };



int main()
{
    cout << endl;
    return 0;
}