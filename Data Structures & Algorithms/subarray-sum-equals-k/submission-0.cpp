class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
 int sum=0;
        int count=0;
       unordered_map<int, int> mp;
         mp[0]=1; // the code would not count subarrays starting from the beginning.
        for(auto x: nums){
            sum+=x;  // adding prifix sum in map
            if(mp.count(sum-k)){  // checking  any old prefix sum other then current
             count+=mp[sum-k]; // take each previous prefix sum as a sub array. 
            }
            mp[sum]++;
        }
        return count;

    }
};