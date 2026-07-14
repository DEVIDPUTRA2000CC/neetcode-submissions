class Solution {
public:
    int maxProfit(vector<int>& nums) {
       int result =0;
       int minimum=INT_MAX;
        for(int i=0; i<nums.size(); i++){
            minimum = min(minimum, nums[i]);
            result=max(result, nums[i]-minimum);  
        }
        return result;
    }
   
   
};
