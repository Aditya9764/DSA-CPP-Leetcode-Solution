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
ListNode* middle(ListNode* head)
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
    ListNode* middleNode(ListNode* head) {
        return  middle(head) ;
        
    }
};