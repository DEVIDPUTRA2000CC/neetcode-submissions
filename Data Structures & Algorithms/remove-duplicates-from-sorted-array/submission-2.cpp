class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int idx=0;
        for(int i=0; i<nums.size(); i++){
            if(i==0 || nums[i] !=nums[i-1]){
                nums[idx++]=nums[i];      // idx finds  where the next unique element goes and pushing them    foward in the array;
            }
        }
       /* for(int i=idx; i<nums.size(); i++){
            nums[i]=nums[idx-i];
        }*/
        return idx;
    }
};