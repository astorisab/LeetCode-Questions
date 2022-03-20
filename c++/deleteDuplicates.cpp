ListNode* deleteDuplicates(ListNode* head) {
        if(head == nullptr) return head;
        ListNode* start = head;
        std::unordered_map<int,int>values;
        ListNode* prev = head;
        values[head->val] = 1;
        head  = head->next;
  
        while(head != nullptr){
       
          if(values.find(head->val) != values.end()){
             ListNode* prevRecover = prev;
             prev->next = head->next;
             prev = prevRecover;
          }else{
             values[head->val] = 1;
             prev = prev->next; 
          }
          head = head->next;
        }
        
        
         return start;
    }
