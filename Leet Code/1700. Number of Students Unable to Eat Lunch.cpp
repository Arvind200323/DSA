class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int> q;
        for(auto x:students) q.push(x);
        int count = 0;
        int i=0;
        while(!q.empty()){
            int temp = q.front();
            if(count == q.size()) break;
            if(temp == sandwiches[i]){
                count = 0;
                i++;
                q.pop();
            }
            else{
                count++;
                q.pop();
                q.push(temp);
            }
        }
        return q.size();
    }
};
