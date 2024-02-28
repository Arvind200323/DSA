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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* temp = head;
        ListNode* prev = head;

        while(head && head->val == val) // if head is not NULL && head->val is val 
            head = head->next;
        
        while(temp) {
            if(temp->val == val) prev->next = temp->next; //assign temp->next to prev->next when val found
            else prev = temp;
            temp = temp->next;
        }
        return head;
    }
};
