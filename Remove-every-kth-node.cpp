class Solution {
    public:
    Node* deleteK(Node *head,int K){
      int count = 1;
      
      if(K == 1){
          return nullptr;
      }
      
      Node *curr = head;
      Node *prev = NULL;
      
      while(curr){
          
          if(count == K){
              prev->next = curr->next;
              delete curr;
              curr = prev->next;
              count = 1;
          }
          else{
                count++;
                prev = curr;
                curr = curr->next;
          }
          
      }
      return head;
    }
};
