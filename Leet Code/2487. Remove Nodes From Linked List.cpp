class Solution {
public:
    ListNode* removeNodes(ListNode* head) {
        vector<int> arr;
        ListNode* p = head,*q;
        while(p){
            while(!arr.empty() && arr.back()<p->val) arr.pop_back();
            arr.push_back(p->val);
            p = p->next;
        }
        p = head;
        int i = 0, n = arr.size();
        while(i<n){
            p->val = arr[i++];
            arr.pop_back();
            q = p;
            p = p->next;
        }
        q->next = NULL;
        return head;
    }
};
