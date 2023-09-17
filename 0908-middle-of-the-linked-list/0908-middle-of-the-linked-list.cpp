/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
 /*ListNode* middle(ListNode* head)
{
    int len=0 ;
    ListNode* temp = head ;
    while(temp != NULL)
    {
        temp = temp->next ;
        len++ ;
    }
    int ans = len/2 +1 ;
    int cnt =1 ;
    while(cnt<ans)
    {
        head  = head->next ;
        cnt++ ;
    }
    return head ;
}
*/
   ListNode* rabit_tortoise(ListNode* head)
   {
       ListNode* slow = head ;
       ListNode* fast = head->next ;

       // base case 
       if(head == NULL || head->next== NULL)
       {
           return head ;
       }
        else{
       while(fast!=NULL)  //   fast!=NULL  && fast ->next != NULL
        
       {
           fast= fast->next ;
           if(fast!= NULL)
           {                                        // fast=fast->next->next ;
                                                   // slow= slow->next ;
               fast =fast->next ;
           }
           slow= slow->next ;
       }
       return slow ;
        }

   }

    ListNode* middleNode(ListNode* head) {
      //  return  middle(head) ;
        return rabit_tortoise(head) ;
    }
};
