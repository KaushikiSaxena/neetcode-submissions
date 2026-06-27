//Time Complexity: O(nlogn) Space Complexity: O(n)
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> result;
        unordered_map<int,int>map;//map to keep track of [frequency,number]
        int n=nums.size();
        for(int i=0;i<n;i++){
        map[nums[i]]++;//frequency incremented for respective number
        }
        vector<pair<int,int>> arr;//array to store unordered set values of frequencies and numbers
        for(const auto&pair:map){
            arr.push_back({pair.second,pair.first});
        }
        sort(arr.rbegin(), arr.rend());//sort array

        for(int i=0;i<k;i++){
            result.push_back(arr[i].second);//top k values pushed into result vector
        }
        return result;//returning result
    }
};
