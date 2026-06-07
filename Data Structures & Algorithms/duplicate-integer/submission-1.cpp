// Time Complexity: O(n^2) Space Complexity: O(1)
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();
        //iterates through array checking every pair for duplicacy 
        for(int i =0; i<n;i++)
        {for(int j = i+1;j<n;j++)
        {
           if(nums[i]==nums[j])
           {
            return true;
           }
        }
           
        }
        return false;
    }
};
