//Time Complexity: O(n) Space Complexity: O(n)
class Solution {
public:
//unordered set used to make a hash map
unordered_set<int> seen;
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();
        for(int i =0; i<n;i++){
            //if number is found(seen.end() is when number isn't found, so if is not equal to number isn't found that means number is found)
        if(seen.find(nums[i]) != seen.end())
            return true;
        else//if number isn't found insert it in the hash map
        seen.insert(nums[i]);
        }
           
        return false;
    }
};
