class Solution {
public:
    void sortColors(vector<int>& nums) {
        int mid=0;
        int idx=0;
        int high= nums.size()-1;
        while(mid<=high){
             if(nums[mid]==0){
                swap(nums[mid], nums[idx]);
                mid++;
                idx++;
             }else if(nums[mid]==1){
                  mid++;
             }else{
                swap(nums[mid], nums[high]);
                high--;
             }
        }
        
    }
};