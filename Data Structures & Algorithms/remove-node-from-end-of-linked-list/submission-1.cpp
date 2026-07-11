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
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        ListNode* curr = head;
        int listSize = 1;

        while(curr->next){
            listSize++;
            curr = curr->next;
        }

        if(listSize == n) return head = head->next;

        curr = head;
        int i = 1;
        while(i != (listSize-n)){
            curr= curr->next;
            i++;
        }

        
        curr->next = curr->next->next;
        return head;        
    }
};
