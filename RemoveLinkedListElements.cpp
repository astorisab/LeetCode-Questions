ListNode* removeElements(ListNode* head, int val) {
       
        while(head != nullptr && head->val == val){
            head = head->next;
        }
        if(head == nullptr) return nullptr;
        ListNode * list = head;
        ListNode * behind = head;
        head = head->next;
        
        while(head != nullptr){
            if(head->val == val){
                    if(head->next == nullptr){
                       behind->next = nullptr;
                       break;
                    } 
                    behind->next = head->next;
                    head = head->next;
            }else{
                behind = head;
                head = head->next;
            } 
        }
        return list;
    }
