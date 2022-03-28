bool hasCycle(ListNode *head) {
        std::unordered_map<ListNode *, int>value;
        while(head != nullptr && value.find(head) == value.end() ){
            value[head] = 0;
            head = head->next;
        }
        return !(head == nullptr);
    }
