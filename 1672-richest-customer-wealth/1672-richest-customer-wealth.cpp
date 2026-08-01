class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int n= accounts.size();
        int m=accounts[0].size();
        int max_wealth=0;
        for(int i=0;i<n;i++){
            int wealth=0;
            for(int j=0;j<m;j++){
               wealth=wealth+accounts[i][j]; 
            }
            if(wealth>max_wealth)
            max_wealth=wealth;
        }
        return max_wealth;
        
    }
};