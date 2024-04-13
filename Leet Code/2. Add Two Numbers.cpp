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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        // int num1=0, num2=0, sum=0;
        // int x=1;
        // while(l1!=NULL){
        //     num1+=l1->val*x;
        //     x*=10;
        //     l1=l1->next;
        // }
        // x=1; 
        // while(l2!=NULL){
        //     num2+=l2->val*x;
        //     x*=10;
        //     l2=l2->next;
        // }
        // sum=num1+num2;
        // ListNode* ans = new ListNode(sum%10);
        // ListNode* move = ans;
        // sum/=10;
        // while(sum){
        //     ListNode* temp = new ListNode(sum%10);
        //     sum/=10;
        //     move->next = temp;
        //     move = temp;
        // }
        // return ans;

        ListNode* dummyHead = new ListNode(-1);
        ListNode* curr = dummyHead;
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;
        int carry = 0;

        while(temp1!=NULL || temp2!=NULL){
            int sum = carry;
            if(temp1) sum += temp1->val;
            if(temp2) sum += temp2->val;

            ListNode* newNode = new ListNode(sum%10);
            carry = sum/10;

            curr->next = newNode;
            curr = curr->next;

            if(temp1) temp1 = temp1->next;
            if(temp2) temp2 = temp2->next;
        }
        if(carry!=0){
            ListNode* newNode = new ListNode(carry);
            curr->next = newNode;
        }
        return dummyHead -> next;
    }
};
