class Solution {
public:
    
    ListNode* CarryFix(ListNode* current, ListNode* l1, int value){
      
        while(value > 0 && l1 != nullptr){
            value += l1->val;
       
            current->next = new ListNode();
            current = current->next;
            current->val = value % 10;
            value = value/10;
            l1 = l1->next;
        }
        while(value > 0 ){
            current->next = new ListNode();
            current = current->next;
            current->val = value % 10;
            value = value/10;
        }
        if(l1 != nullptr){
            current->next = l1;
        }
       
        
        return current;
    }
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
      
       
        int value = 0;
        ListNode* sum;
        ListNode* ret;
        bool isStart = true;
        while(l1 != nullptr && l2 != nullptr){
            value += l1->val + l2->val;
            if (isStart) {
              
              isStart = false;
              sum = new ListNode();
              ret = sum;
            }else{
              
            sum->next = new ListNode();
            sum = sum->next;  
            }
            
            if (value > 9){
                sum->val = value % 10;
                value = value/10;
            }else{
               sum->val = value;    
               value = 0;  
            }

            l1 = l1->next;
            l2 = l2->next;
        }
        
        
        if (l1 != nullptr){  
            sum->next = l1;
            CarryFix(sum, l1, value);
        }else if(l2 != nullptr){
            sum->next = l2;
            CarryFix(sum, l2, value);
        }else{
            while(value > 0 ){
            sum->next = new ListNode();
            sum = sum->next;
            sum->val = value % 10;
            value = value/10;
          }
        }
        sum = nullptr;
      return ret;  
    }
};
