ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        if(headA == nullptr || headB == nullptr) return nullptr;
        ListNode * startA = headA;
        int valueA = 0;
        ListNode * startB = headB;
        int valueB = 0;        
        while(startA != nullptr){
            ++valueA;
            startA = startA->next;
        }
        while(startB != nullptr){
            ++valueB;
            startB = startB->next;
        }
        int start = 0;
        if(valueB > valueA){
            valueB = valueB - valueA;
            while(start < valueB){
                headB = headB->next;
                ++start;
            }
        }else{
            valueA = valueA - valueB;
            while(start < valueA){
                headA = headA->next;
                ++start;
            }
        } 
        while(headA != nullptr){
            if(headA == headB) return headA;
            headA = headA->next;
            headB = headB->next;
        }
        return nullptr;
    }
