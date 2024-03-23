/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(NULL) {}
 *     ListNode(int x) : val(x), next(NULL) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */


class Solution {
public:
    void reorderList(ListNode* head) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        
        vector<ListNode*> arr;
        ListNode* temp = head;
        while (temp != nullptr) {
            arr.push_back(temp);
            temp = temp->next;
        }
        int i = 0, j = arr.size()-1;
        while (i < j) {
            arr[i]->next = arr[j];
            i++;
            if (i == j) break; 
            arr[j]->next = arr[i];
            j--;
        }
        arr[i]->next = nullptr;
    }
};
