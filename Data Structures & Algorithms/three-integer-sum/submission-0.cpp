class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {



 sort(nums.begin(), nums.end());
         vector<vector<int>> ans;
        for(int i=0; i<nums.size()-2; i++){ //  resone for nums.size()-2 we need at least two elements    remaining for left and right.             
        int low=i+1;
        int high=nums.size()-1;
        // Skip duplicate first elements
            if (i > 0 && nums[i] == nums[i - 1])
                continue;

        
        
        while(low<high){
            int sum=nums[low]+nums[high]+nums[i];
            
            if(sum==0){
             ans.push_back({nums[i], nums[low], nums[high]});
                low++;
                high--; // also check for other indices too
            }else if(sum<0){
                low++;
            }else{
                high--;
            }
            
        } 
        }
        return ans;
    

        
    }
};
