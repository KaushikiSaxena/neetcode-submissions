//Time complexity: O(n) Space Complexity O(n)
class Solution {
public:
    bool isValid(string s) {
        int n = s.size();
        stack <int> st;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='('||s[i]=='{'||s[i]=='[')//if open bracket present
            st.push(s[i]);//pushing open bracket to stack

            else{//if open bracket not present
                if(st.empty())//closed bracket without open one
                return false;

                if(s[i]==')' && st.top()=='('||//close bracket with matching open bracket
                   s[i]=='}' && st.top()=='{'||
                   s[i]==']' && st.top()=='[')
                   st.pop();

                else
                return false;//close bracket with mismatched open bracket
            }
        }
        return st.empty();//all matches found and stack is empty
    }
};
