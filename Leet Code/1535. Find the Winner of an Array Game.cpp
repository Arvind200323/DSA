class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);

        int n=arr.size();
        if (n<=k) return *max_element(arr.begin(), arr.end());
        deque<int> q(arr.begin()+1, arr.end());
        int count=0;
        while(count<k){
            int x=q.front();
            if (x>arr[0]){
                q.push_back(arr[0]);
                arr[0]=x;
                count=1;
                q.pop_front();
            }
            else{
                count++;
                q.pop_front();
                q.push_back(x);
            }
        }
        return arr[0];
    }
};
