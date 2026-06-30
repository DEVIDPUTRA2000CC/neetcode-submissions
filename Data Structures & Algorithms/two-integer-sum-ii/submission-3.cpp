class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {

        // O(1) tc
     unordered_map<int, int> mp;
    for(int i=0; i<numbers.size(); i++){
        int need=target-numbers[i];
        if(mp.count(need)){           // mp.count-> if need exsit on map its return 1 or else 0
            return {mp[need]+1, i+1};  // mp[need] gives index of need 
        }
        mp[numbers[i]]=i;           // storing the key, value on map eg. mp[2]=2
    }
       return {};
    }
        
    
};
