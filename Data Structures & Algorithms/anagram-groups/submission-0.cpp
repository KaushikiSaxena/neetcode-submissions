//Time Complexity: O(n*m) Space Complexity: O(n*m)
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
     int n= strs.size();//total number of strings
     unordered_map <string,vector<string>> map;
     for(int i=0;i<n;i++){//iterating through each word
        int alpha[26] = {0};//array for keeping track of frequencies of charachters in a particular word
        int m= strs[i].size();//number of charachters in string
        for(int j=0;j<m;j++){
            alpha[(strs[i][j])-'a']++; //increasing frequency count
        }
        string key = "";
            for(int k = 0; k < 26; k++) {
                key += to_string(alpha[k]) + "#"; //assigning key to resultant frequency array,strings with same resultant frequency array will be assigned the same key
            }
        map[key].push_back(strs[i]);//put the word in it's respective place according to it's key in the map
     }
     vector<vector<string>> result;
     for(const auto&pair :map){
        result.push_back(move(pair.second));//create a resultant vector to use the second part(string part) of the pair parameter 
     }
    return result;//return strings
    }
};
