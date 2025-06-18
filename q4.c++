/**it was given to solve it in time O(n) and space O(1) 
 * but i was only able to solve it with satisfying any one the two conditions.
 *  i saw the approach in chatgpt, understand it completly(it is a fantastic method)
 *  and then used it here*/
ListNode* Solution::getIntersectionNode(ListNode* A, ListNode* B) {
   
    auto m=A,n=B;
    while(m!=n){
        if (m==NULL) m=B;
        else m=m->next;
        if (n==NULL) n=A;
        else n=n->next;
    }
    return m;
}