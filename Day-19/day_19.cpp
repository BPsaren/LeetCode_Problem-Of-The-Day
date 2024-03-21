ListNode* prev = nullptr;
        ListNode* curr = head;
        
        while (curr != nullptr) {
            ListNode* nextTemp = curr->next; // Store the next node
            curr->next = prev; // Reverse the current node's pointer
            prev = curr; // Move pointers one position ahead
            curr = nextTemp;
        }
        
        return prev; // After loop, 'prev' will be the new head