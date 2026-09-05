class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int n = accounts.size();
        vector<int>sum(n);
        for(int i = 0;i< accounts.size();i++){
            sum[i] = 0;
            for(int j = 0; j<accounts[i].size();j++){
                sum[i] += accounts[i][j];
            }
        }
        return *max_element(sum.begin(),sum.end());
    }
};