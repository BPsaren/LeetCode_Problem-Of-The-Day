class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int>temp;
        ListNode* curr=head;
        while(curr){
            temp.push_back(curr->val);
            curr=curr->next;
        }

        int i=0;
        int j=temp.size()-1;
        while(i<j){
            if(temp[i]!=temp[j])
                return false;
                i++;
                j--;
            
        }
        return true;
    }
};