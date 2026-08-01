class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
     int n= candies.size();
        vector<bool>ans(n);
        int max=*max_element(candies.begin(),candies.end());
        for(int i=0;i<n;i++){
            candies[i]=candies[i]+extraCandies;
            if(candies[i]>=max){
                ans[i]=true;

            } 
        }
        return ans;
    }
};