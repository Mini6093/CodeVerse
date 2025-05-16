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
    ListNode* swapPairs(ListNode* head) {
        // Dummy node to handle edge cases easily
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        
        ListNode* current = dummy;
        
        while (current->next != nullptr && current->next->next != nullptr) {
            ListNode* first = current->next;
            ListNode* second = current->next->next;
            
            // Swap
            first->next = second->next;
            second->next = first;
            current->next = second;
            
            // Move current pointer 2 nodes ahead
            current = first;
        }
        
        ListNode* newHead = dummy->next;
        delete dummy; // free dummy node
        return newHead;
    }
};
