class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *first=head,*second=head;
        while(second!=NULL && second->next!=NULL)
        {
            first=first->next;
            second=second->next->next;
        }
        return first;
    }
};