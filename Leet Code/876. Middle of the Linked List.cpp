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
    ListNode* middleNode(ListNode* head) {
        ListNode* temp = head;
        int size = 1;
        while(temp->next!=NULL){
            size++;
            temp = temp->next;
        }
        cout<<size<<endl;
        int i=0;
        temp = head;
        while(i<size/2){
            temp = temp->next;
            i++;
        }
        return temp;
    }
};
