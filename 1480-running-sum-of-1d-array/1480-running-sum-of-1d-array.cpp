class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n=nums.size();
        vector<int>sum(n);
        int add=0;
        for(int i=0;i<n;i++){
            sum[i]=add+nums[i];
            add=sum[i];
         
        }
        return sum;
    }
};