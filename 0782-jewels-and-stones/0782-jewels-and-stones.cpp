class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
   /*     //itrating over first string 
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
  */ 
  /* 
  int countt=0 ;
        for (char jewel : jewels) {
        // Count the occurrences of the current jewel character in the stone string
        countt += count(stones.begin(), stones.end(), jewel);
    }
     return countt ;
  */
  int count = 0;
    unordered_map<char, int> mp;

    for (int i = 0; i < stones.size(); i++)
    {
        mp[stones[i]]++;
    }
    for (int j = 0; j < jewels.size(); j++)
    {
        int val = mp[jewels[j]];
            count +=val ;
    }

    return count ;
  }
};