class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector<int>lastindex(26, 0) ;
        for(int i=0 ; i<s.length() ; i++)
        {
            lastindex[s[i]-'a']=i ;
        }
        vector<bool>seen(26 , false);
        stack<char>st ;
        for(int i=0; i<s.length() ; i++)
        {
            int curr = s[i]-'a';
            if(seen[curr] == true )
            {
                continue ;
            }
            while(st.size() > 0 && st.top() >  s[i] &&  i < lastindex[st.top()-'a'])
            {
               seen[st.top() - 'a'] = false; // pop out and mark unseen
                st.pop();
            }
            st.push(s[i]);
            seen[curr]=true;
        }
            string ans = "";
            while(st.size() > 0)
            {
                ans +=st.top();
                st.pop();
            }
            reverse(ans.begin() , ans.end());
            return ans;
        
    }
};