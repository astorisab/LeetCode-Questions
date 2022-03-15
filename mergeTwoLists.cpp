ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* build = new ListNode();
        ListNode* final = build; 
        ListNode* connect = build;
        if(list1 == nullptr){return list2;}
        else if(list2 == nullptr){return list1;}
        
        while(list1 != nullptr && list2 != nullptr){
            if(list1->val < list2->val){
                build->val = list1->val;
                list1 = list1->next;
            }else{
               build->val = list2->val;
               list2 = list2->next; 
            }
            connect = build;
            build->next = new ListNode();
            build = build->next;
        }
        if(list1 != nullptr){
            connect->next = list1;

        }else{
            connect->next = list2;
        }
        
        return final;
    }
