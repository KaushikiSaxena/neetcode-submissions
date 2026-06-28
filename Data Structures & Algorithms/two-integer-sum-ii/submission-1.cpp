// Time Complexity: O(n) Space Complexity: O(1)
class Solution {
   public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        int i = 0, j = n - 1;  // two pointers one at beginning and one at end of the array
        while (i < j) {        // goes through array till left and right pointers meet
            if (numbers[i] + numbers[j] >
                target) {  // if left pointer + right  pointer is greater than target that means
                           // right is too high so we decrease right pointer
                j--;
            } else if (numbers[i] + numbers[j] <
                       target) {  // if left pointer + right  pointer is less than target that means
                                  // left is too low so we increase left pointer
                i++;
            } else {  // if sum is equal to target, we return the solution
                return {i + 1, j + 1};
            }
        }
        return {};
    }
};
