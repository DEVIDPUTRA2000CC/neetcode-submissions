class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {


        unordered_map<int, int> frq;
      priority_queue<pair<int, int>> pq;
      vector<int> ans;

      for(int i=0; i<nums.size(); i++){
        int x=nums[i];
        frq[x]++;
      }
      for(auto it: frq){
        int num=it.first;
        int count=it.second;
        pq.push({count, num}); // this order is imp {3, 1}

      }
      for(int i=0; i<k; i++){
        ans.push_back(pq.top().second);
        pq.pop();
      }
      return ans;
        
    }
};
