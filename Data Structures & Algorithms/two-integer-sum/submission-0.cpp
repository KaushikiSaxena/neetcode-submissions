// Time Complexity: O(n^2) Space Complexity: O(1)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n= nums.size();
        //go through each combination and check conditions, if true, return values
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]+nums[j]==target && i != j)
                {
                    return {i,j};
                }
            }
        }
        
    }
};
