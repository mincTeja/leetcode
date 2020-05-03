public:
    ListNode* reverseList(ListNode* head) {
        ListNode *curr=head,*next,*prev=NULL;
        while(curr!=NULL)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        head=prev;
        return head;
    }
    
};