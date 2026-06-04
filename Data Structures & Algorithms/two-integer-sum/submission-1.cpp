class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> indices;
        int n = nums.size();
        for(int i=0;i<n;i++){
            indices[nums[i]]= i;
        }
        for(int i=0;i<n;i++){
            int d =target - nums[i];
        if(indices.count(d) && indices[d] != i)
        {
            return {i,indices[d]};
        }
        }
    }
};
