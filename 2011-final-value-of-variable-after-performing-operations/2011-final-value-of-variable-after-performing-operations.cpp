class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int var=0;
        for(const auto& val:operations){
            if(val[1]=='+')
            var+=1;
            else
            var-=1;
        }
        return var;
    }
};