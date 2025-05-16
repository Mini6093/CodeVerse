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
    ListNode* removeElements(ListNode* head, int val) {
        // Create a dummy node to handle edge cases (like removing head)
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        
        ListNode* current = dummy;
        
        while (current->next != nullptr) {
            if (current->next->val == val) {
                // Remove the node
                ListNode* temp = current->next;
                current->next = current->next->next;
                delete temp;  // optional: free memory
            } else {
                current = current->next;
            }
        }
        
        ListNode* newHead = dummy->next;
        delete dummy; // clean up dummy node
        return newHead;
    }
};
