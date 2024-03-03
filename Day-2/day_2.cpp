/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
      ListNode* dummy = new ListNode(0); // Dummy node to handle edge cases
        dummy->next = head;
        ListNode* first = dummy;
        ListNode* second = dummy;
        
        // Move second pointer n nodes ahead
        for (int i = 0; i <= n; i++) {
            if (second == nullptr) // Check if n is out of range
                return nullptr;
            second = second->next;
        }
        
        // Move both pointers until second pointer reaches the end
        while (second != nullptr) {
            first = first->next;
            second = second->next;
        }
        
        // Remove the nth node from the end
        ListNode* toRemove = first->next;
        first->next = toRemove->next;
        delete toRemove;
        
        ListNode* result = dummy->next; // Store the head after removal
        delete dummy; // Delete the dummy node
        return result;
     
    }
};