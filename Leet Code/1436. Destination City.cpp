class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string,string> mpp;
        for(int i=0;i<paths.size();i++){
            mpp[paths[i][0]] = paths[i][1];
        }  
        string dest = "$";
        string temp = paths[0][0];
        while(dest=="$"){
            auto it = mpp.find(temp);
            if(it==mpp.end()){
                dest = temp;
            }
            else
            temp = it->second;
        }
        return dest;
    }
};
