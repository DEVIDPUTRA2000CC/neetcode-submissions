class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map<int, int> frq;
        vector<int> ans;
for(int i=0; i<nums.size(); i++){
    int x=nums[i];
    
    if(frq[x]==0){
        ans.push_back(x);
        frq[x]++; 
    }
}
nums=ans;
       return nums.size();
    }
};