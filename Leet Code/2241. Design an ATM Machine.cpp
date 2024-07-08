class ATM {
public:
    map<int,int> mpp;
    vector<int>note;
    ATM() {
        note={20,50,100,200,500};
        for(auto i:note) mpp[i]=0;
    }
    
    void deposit(vector<int> banknotesCount) {
        mpp[500]+=banknotesCount[4];
        mpp[200]+=banknotesCount[3];
        mpp[100]+=banknotesCount[2];
        mpp[50]+=banknotesCount[1];
        mpp[20]+=banknotesCount[0];
    }
    
    vector<int> withdraw(int amount) {
        vector<int>ans(5);
        map<int,int>tempmap=mpp;
        int temp;
        for(int j=4;j>=0;j--){
            int i=note[j];
            temp=amount/i;
            if(temp>0 && mpp[i]>0){
                if(mpp[i]>=temp){
                    mpp[i]-=temp;
                    amount=amount%i;
                }
                else{
                    amount=amount-(i*mpp[i]);
                    mpp[i]=0;
                }
            }
            ans[j]=tempmap[i]-mpp[i];
        }
        if(amount==0) return ans;
        mpp=tempmap;
        return {-1};
    }
};

/**
 * Your ATM object will be instantiated and called as such:
 * ATM* obj = new ATM();
 * obj->deposit(banknotesCount);
 * vector<int> param_2 = obj->withdraw(amount);
 */
