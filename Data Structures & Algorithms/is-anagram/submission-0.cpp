class Solution {
public:
    bool isAnagram(string s, string t) {
        int sum=0;
        int ns = s.length();
        int nt = t.length();
        if(ns==nt)
        { int alph[26]={0};
            for(int i=0;i<ns;i++)
            { 
                alph[s[i]-'a']++;
                alph[t[i]-'a']--;
            }

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