/**
 * i solved it assuming time O(n) and space O(1)
 * };
 */
ListNode* Solution::solve(ListNode* A) {
    ListNode* temp=NULL,*even=NULL,*a=A;
    //separate the even nodes in reversed order
    while (a!=NULL && a->next!=NULL){
        temp=a->next;
        a->next=a->next->next;
        temp->next=even;
        even=temp;
        a=a->next;
    }
    a=A;
    //insert the even nodes in between the odd nodes;
    while(even!=NULL){
        temp=a->next;
        a->next=even;
        even=even->next;
        a->next->next=temp;
        a=temp;
    }
    return A;
}
