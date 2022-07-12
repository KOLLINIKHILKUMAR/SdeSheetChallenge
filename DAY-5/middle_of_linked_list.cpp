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
class Solution 
{
public:
    ListNode* middleNode(ListNode* head) 
    {
        ListNode * temp;
        int i;
        for(i=0,temp=head;temp!=NULL;temp=temp->next,i++)
        { 
        }  
        i=i/2;
        for(temp=head;i!=0;i--,temp=temp->next)
        {
            head=temp->next;
        }
    return head;
    }
    
};
