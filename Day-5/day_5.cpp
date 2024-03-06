class Solution {
public:
    bool hasCycle(ListNode *head) {
         if (head == NULL || head->next == NULL) {
            return NULL; // Return nullptr for empty or single-node lists
        }

        ListNode *slow = head, *fast = head;

        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast) {
                // Cycle detected, find the cycle starting node
                ListNode *ptr1 = head, *ptr2 = slow;
                while (ptr1 != ptr2) {
                    ptr1 = ptr1->next;
                    ptr2 = ptr2->next;
                }
                return ptr1; // Return the starting node of the cycle
            }
        }

        return NULL; // No cycle found
    }
};