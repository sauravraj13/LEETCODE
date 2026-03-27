class Solution {
public:
    bool isPalindrome(ListNode* head) {
        stack<int> st;
        ListNode* temp = head;

        // Step 1: push all values
        while(temp != NULL){
            st.push(temp->val);
            temp = temp->next;
        }

        // Step 2: compare while traversing again
        temp = head;
        while(temp != NULL){
            if(temp->val != st.top()){
                return false;
            }
           st.pop();
            temp = temp->next;
        }

        return true;
    }
};
