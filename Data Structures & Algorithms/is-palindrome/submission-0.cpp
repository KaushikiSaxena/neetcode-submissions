//Time Complexity:O(n) Space Complexity:O(1)
class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        //initializing strings as spaces
        string a = ""; 
        string b = "";
        for (int i =0;i<n;i++)//forward
        {
            if(isalnum(s[i]) != 0){//if a number or alphabet, append to a
            a += tolower(s[i]);
            }
        }
        for (int i =n-1;i>=0;i--)//backward
        {
            if(isalnum(s[i]) != 0){//if a number or alphabet append to b
            b +=tolower(s[i]);
            }
        }        
        if(a==b)//if strings equal return true
        {
            return true;
        }
       
  return false;  }//else return false
};
