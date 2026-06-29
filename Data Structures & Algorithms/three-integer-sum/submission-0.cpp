//Time Complexity: O(n^2) Space Complexity: O(1)
class Solution {
   public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());//sorting array
        for (int i = 0; i < n - 2; i++) {//first pointer i iterates through array till n-2(more is not needed as triplets are there_)
            if (i > 0 && nums[i] == nums[i - 1]) {//if duplicate vslues of first pointer nums[i] is there, the value is skipped
                continue;
            }
            if (nums[i] > 0) break;//if first element is positive, then no such triplets will be found where sum is 0,so loop is broken
            int target = -nums[i];//rearranging the equation
            int j = i + 1;//j is left pointer at right of index pointer i's element
            int k = n - 1;//k is right pointer at the end of the array
            while (j < k) {
                if (nums[j] + nums[k] < target) {//shift to right
                    j++;
                } else if (nums[j] + nums[k] > target) {//shift to left
                    k--;
                } else {//solution found, add to resultant array
                    res.push_back({nums[i], nums[j], nums[k]});
                    j++;
                    k--;
                    while (j < k && nums[j] == nums[j - 1]) {//removing left pointer duplicates
                        j++;
                    }
                    while (j < k && nums[k] == nums[k + 1]) {//removing right pointer duplicates
                        k--;
                    }
                }
            }
        }
        return res;
    }
};
