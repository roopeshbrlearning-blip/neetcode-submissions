/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        ListNode* head = nullptr;
        ListNode* prev = nullptr;
        ListNode* curr = nullptr;
        ListNode* insert = nullptr;

        if(!list1) return list2;
        if(!list2) return list1; 

        if (list1->val < list2->val) {
            head = list1; 
            insert = list2;
        } else {
            head = list2; 
            insert = list1;
        }

        curr = head;
        ListNode* nextinsert = nullptr;

        while(curr && insert){

            if(insert->val < curr->val){  
                nextinsert = insert->next; 

                prev->next = insert;
                insert->next = curr;

                prev = insert;

                insert  = nextinsert;
    
            }else{
                prev = curr;
                curr = curr->next;
            }
        }
        if(insert){
            prev->next = insert;
        }

        return head;
        
    }
};
