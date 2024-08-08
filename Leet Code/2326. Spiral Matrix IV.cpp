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
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        int top=0,bottom=m-1,left=0,right=n-1;
        vector<vector<int>> ans(m,vector<int>(n,-1));
        while(head!=NULL){
            int j=left;
            while(head!=NULL && j<=right){
                ans[top][j++]=head->val;
                head=head->next;
            }
            top++;
            int i=top;
            while(head!=NULL && i<=bottom){
                ans[i++][right]=head->val;
                head=head->next;
            }
            right--;
            j=right;
            while(head!=NULL && j>=left){
                ans[bottom][j--]=head->val;
                head=head->next;
            }
            bottom--;
            i=bottom;
            while(head!=NULL && i>=top){
                ans[i--][left]=head->val;
                head=head->next;
            }
            left++;
        }
        return ans;
    }
};
