class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
       int sum= 0 ;
       for(auto i =operations.begin() ; i < operations.end() ;i++)
       {
           if(  *i=="++X" || *i=="X++")
           {
               sum += 1 ;
           }
           else
           {
               sum -= 1 ;
           }
       }
       return sum;

    }
};