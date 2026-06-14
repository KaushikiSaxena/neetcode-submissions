//Time Complexity: O(log n) Space Complexity: O(1)
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n= nums.size();
        int l=0,r=n-1;//setting boundaries
        while(l<=r)
        {int mid=l+((r-l)/2);//finding and updating mid value at each iteration
            if(nums[mid]>target)
            {
                 r=mid-1;//updating boundary
            }
            if(nums[mid]<target)
            {
                l=mid+1;//updating boundary
            }
            else if(nums[mid]==target){
                return mid;//number found, returning indice
            }
        }
        return -1;//number not found, returning -1
    }
};
