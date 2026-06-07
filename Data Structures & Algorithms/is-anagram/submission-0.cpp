// Time Complexity: O(n) Space Complexity: O(1)
class Solution {
public:
    bool isAnagram(string s, string t) {
        int sum=0;
        int ns = s.length();
        int nt = t.length();
        if(ns==nt)
            //increments array alpha for particular letters in string s and then decrements for particular letters in string t
        { int alph[26]={0};
            for(int i=0;i<ns;i++)
            { 
                alph[s[i]-'a']++;
                alph[t[i]-'a']--;
            }
//if absolute sum is 0, that is the letters for which arrray was incremented and decremented were the same, then it is an anagram
            for(int i=0;i<26;i++)
            {
                 sum+=abs(alph[i]);
            }
            if(sum==0)
            {
            return true;
            }
        }
        return false; 
     
    }
};
