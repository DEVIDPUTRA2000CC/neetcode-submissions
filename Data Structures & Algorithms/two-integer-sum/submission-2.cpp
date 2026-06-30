class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
unordered_map<int, int> mp;
    for(int i=0; i<nums.size(); i++){
        int need=target-nums[i];
        if(mp.count(need)){           // mp.count-> if need exsit on map its return 1 or else 0
            return {mp[need], i};  // mp[need] gives index of need 
        }
        mp[nums[i]]=i;           // storing the key, value on map eg. mp[2]=2
    }
       return {};
    }
};
