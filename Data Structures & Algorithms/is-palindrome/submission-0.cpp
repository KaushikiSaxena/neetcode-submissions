class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        string a = ""; 
        string b = "";
        for (int i =0;i<n;i++)
        {
            if(isalnum(s[i]) != 0){
            a += tolower(s[i]);
            }
        }
        for (int i =n-1;i>=0;i--)
        {
            if(isalnum(s[i]) != 0){
            b +=tolower(s[i]);
            }
        }        
        if(a==b)
        {
            return true;
        }
       
  return false;  }
};
