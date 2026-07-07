//Time Complexity: O(n) Space Complexity: O(1)
class Solution {
public:
    bool isPalindrome(string s) {
        int l=0,r=s.size()-1;
        while(l<r){
            while(isalnum(s[l])==0){
                l++;
            }
            while(isalnum(s[r])==0){
                r--;
            }
            if( l< r && tolower(s[l]) != tolower(s[r])){
                return false;
            }
            l++;r--;
        }
        return true;
    }
};
