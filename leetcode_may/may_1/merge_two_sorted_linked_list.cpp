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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
       
        if(l1==NULL)
            return l2;
        if(l2==NULL)
            return l1;
        if(l1->val>l2->val)
        {
            ListNode *tmp=l1;
            l1=l2;
            l2=tmp;
        }
        
        
         ListNode *tmp=l1;
        while(l1!=NULL && l1->next!=NULL)
        {
            if(l1->next->val<=l2->val)
            {
                
                l1=l1->next;
                
            }
                
            else
            {   
                ListNode *temp=l2;
                l2=l1->next;
                l1->next=temp;
                l1=l1->next;
            
            }
        }
        l1->next=l2;
        return tmp;
    }
};