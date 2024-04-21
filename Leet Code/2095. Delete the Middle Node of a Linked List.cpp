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
    ListNode* deleteMiddle(ListNode* head) {
        int size = 0;
        ListNode* curr = head;
        while(curr != NULL) {
            curr = curr->next;
            size++;
        }
        size = size / 2;
        ListNode* temp = head;
        if(size == 0) {
            return head->next;
        }
        while(size>1) {
            temp = temp->next;
            size--;
        }
        temp->next = temp->next->next;
        return head;
    }
};
