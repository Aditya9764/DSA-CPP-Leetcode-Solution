class Solution {
public:
    void sortColors(vector<int>& num) {
        int n= num.size() ;
      int   count0 =0 ;
        int count1 =0 ;
        int count2 =0 ;
        for(int i=0 ;i<n ;i++)
        {
            if(num[i]==0)
            {
                count0++ ;
            }
           else if(num[i]==1)
           {
                count1++ ;
           }
           else if(num[i]==2)
           {
                count2++ ;
           }
        }
        for(int i=0 ;i<n ; i++)
        {
            if(count0 !=0)
            {
                num[i]=0 ;
                count0-- ;
            }
            else if(count1 !=0)
            {
                num[i]=1 ;
                count1-- ;
            }
            else if(count2 !=0)
            {
                num[i]=2 ;
                count2-- ;
            }
        }

            }
};