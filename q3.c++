/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* A) {
    ListNode *h=A;
    while(h!=NULL && h->next!=NULL){
        if (h->val==h->next->val){
            h->next=h->next->next;
        }
        else{
             h=h->next;
        }
       
    }
    return A;
}
