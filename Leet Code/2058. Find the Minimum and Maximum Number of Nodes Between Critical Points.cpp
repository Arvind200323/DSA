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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> res(2,-1);
        int prev_critical_idx=-1,first_critical_idx=-1;
        ListNode* prev=head;
        ListNode* curr=head->next;
        int curr_idx=1;
        while(curr->next!=nullptr) {
            if ((curr->val > prev->val && curr->val > curr->next->val) || (curr->val < prev->val && curr->val < curr->next->val)){
                if (prev_critical_idx != -1) res[0]=(res[0] == -1) ? curr_idx - prev_critical_idx : min(res[0], curr_idx - prev_critical_idx);
                else first_critical_idx = curr_idx;
                prev_critical_idx = curr_idx;
            }
            prev=curr;
            curr=curr->next;
            curr_idx++;
        }
        if (prev_critical_idx != -1 && prev_critical_idx != first_critical_idx) res[1]=prev_critical_idx - first_critical_idx;
        return res;
    }
};
