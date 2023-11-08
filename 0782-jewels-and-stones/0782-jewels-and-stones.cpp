class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        //itrating over first string 
        int count = 0 ;
    for(int i=0 ; i<jewels.size() ;i++)
    {
        char temp = jewels[i] ;        // used  temp  to store a jewel character
        
        // iterating over 2cd string 
        for(int j=0 ; j<stones.size() ; j++)
        {
            if(temp==stones[j])
            {
                count++;
            }
        }
    }
    return count ;
    }
};