class Solution {
public:
unordered_set<int> seen;
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();
        for(int i =0; i<n;i++){
        if(seen.find(nums[i]) != seen.end())
            return true;
        else
        seen.insert(nums[i]);
        }
           
        return false;
    }
};