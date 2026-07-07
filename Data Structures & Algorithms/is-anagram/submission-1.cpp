class Solution {
public:
    bool isAnagram(string s, string t) {
        int sn= s.size(),tn = t.size();
        if(sn != tn){
            return false;
        }int alph[26]={0},sum =0;
        for(int i=0;i<sn;i++){
            alph[s[i]-'a']++;
            alph[t[i]-'a']--;
        }
        for(int i=0;i<26;i++){
            if(alph[i]!=0)
            return false;
        }
        return true;
        
    }
};
