class Solution {
public:
    void reorderList(ListNode* head) {
         if (!head || !head->next)
            return;

        // Step 1: Store the nodes in a vector
        vector<ListNode*> nodes;
        ListNode* current = head;
        while (current) {
            nodes.push_back(current);
            current = current->next;
        }

        // Step 2: Reorder the list using two pointers
        int left = 0, right = nodes.size() - 1;
        while (left < right) {
            nodes[left]->next = nodes[right];
            left++;
            if (left == right) // In case of odd number of nodes, break
                break;
            nodes[right]->next = nodes[left];
            right--;
        }
        nodes[left]->next = nullptr; // Terminate the list
    }
};