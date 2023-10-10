class Solution {
public:
    void reverseString(vector<char>& s) {
    int start = 0 ;
    int size = s.size() ;
    int end = size -1 ;
    while(start < end)
    {
        int temp = s[start] ;
        s[start]=s[end] ;
        s[end] = temp ;
        start++;
        end--;
    }
     
        
    }
};