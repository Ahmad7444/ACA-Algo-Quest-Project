
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (head==NULL) return head;
        ListNode*p=head->next;
        head->next=NULL;
        while(p!=NULL){
            auto temp=p->next;
            p->next=head;
            head=p;
            p=temp;
        }
        return head;


    }
};