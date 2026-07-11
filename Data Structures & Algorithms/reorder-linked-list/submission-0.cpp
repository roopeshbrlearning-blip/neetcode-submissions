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
    void reorderList(ListNode* head) {

        ListNode* slow = head;
        ListNode* fast = head->next;
        ListNode* second = nullptr;

        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }

        second = slow->next;
        slow->next = nullptr;

        ListNode* prev = nullptr;
        ListNode* curr = second;

        while(curr){

            ListNode* next = curr->next;

            curr->next = prev;
            prev = curr;
            curr = next;
        }

        while(prev){
            ListNode* leftNext = head->next;
            ListNode* rightNext = prev->next;

            head->next = prev;
            prev->next = leftNext;

            head = head->next->next;
            prev = rightNext;
        }

        
    }
};
