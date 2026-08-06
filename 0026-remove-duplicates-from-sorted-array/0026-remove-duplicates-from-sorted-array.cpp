class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int i,j,unique=1;
        i=1;
        j=0;
        
        while(i<n){
            
         if(nums[i]==nums[i-1]){
            i++;
            continue;
         }
         else{
          nums[j+1]=nums[i];
           unique++;
           j++;
           i++;
         }
        } 
           
          return unique;
        
        
    }
};