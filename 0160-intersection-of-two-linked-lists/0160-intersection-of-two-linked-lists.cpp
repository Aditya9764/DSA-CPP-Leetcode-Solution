/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {

         if(!headA || !headB) return NULL;

        int size1 =  0 ;
        int size2 =  0;
        ListNode *tempA = headA ;
        ListNode *tempB = headB ;
        while(tempA != NULL )
        {
            size1++  ;
            tempA = tempA ->next ;
            
        }
        while(tempB  != NULL )
        {
            tempB = tempB ->next ;
            size2++  ;
        }

       
        tempB = headB ;
        int cnt1 = 0 ;
        int remain = 0 ; 


        if(size1 > size2 )
        {
        while(size1 > size2)
        {
            headA  = headA ->next ;
            size1-- ;
        }
        }

        else 
        {
             while(size2 > size1)
        {
            headB  = headB ->next ;
            size2-- ;
        }
        }     
        
        // step3 
        while(headA && headB)
        {
            if(headA==headB)
            {
                return headA ;
            }
            headA = headA->next ;
            headB = headB->next ;
        }
        return NULL ;
    }
};