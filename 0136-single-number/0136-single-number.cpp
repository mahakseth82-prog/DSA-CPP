class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        int XOR=0;
        for(int i=0;i<n;i++){
        XOR=XOR^nums[i]; // All duplicates thats are available will become zero after XOR with each other
                         //only the single elment will be remain left ans thats will be ans;
        }
        return XOR;
    }
};