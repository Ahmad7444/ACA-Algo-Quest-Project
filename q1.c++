class Solution {
  public:
    Node* findFirstNode(Node* head) {
        // your code here
        auto p=head;
        set<Node*> s;
        s.insert(p);
        p=p->next;
        while(p!=NULL && s.find(p)==s.end()){
            s.insert(p);
            p=p->next;
        }
        
        return p;
        
        
    }
};
// this method below(floyd), i didnt do it myself. i saw the approach there in the website, understand it, then coded by my own
// class Solution {
//   public:
//     Node* findFirstNode(Node* head) {
        
//         auto s=head,f=head->next;
//         while(f!=NULL && f->next!=NULL && s!=f){
//             s=s->next;
//             f=f->next->next;
//         }
        
//         if (s==f) {
//             s=head;
//             f=f->next;
//             while (s!=f){
//                 s=s->next;
//                 f=f->next;
//             }
//             return f;
//         }
//         else return NULL;
        
        
//     }
// };