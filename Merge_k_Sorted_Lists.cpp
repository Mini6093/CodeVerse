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
 #include <vector>
 #include <queue>
 using namespace std;
 
 class Solution {
 public:
     ListNode* mergeKLists(vector<ListNode*>& lists) {
         // Define the comparator for the priority queue (min-heap)
         auto compare = [](ListNode* a, ListNode* b) {
             return a->val > b->val;  // Min-heap based on ListNode value
         };
 
         priority_queue<ListNode*, vector<ListNode*>, decltype(compare)> pq(compare);
 
         // Push the head of each list into the priority queue
         for (auto list : lists) {
             if (list) pq.push(list);
         }
 
         ListNode* head = new ListNode(0);  // Dummy node
         ListNode* tail = head;  // Pointer to the last node of the merged list
 
         // Process the priority queue until it's empty
         while (!pq.empty()) {
             ListNode* node = pq.top();
             pq.pop();
             tail->next = node;  // Attach the smallest node to the merged list
             tail = tail->next;  // Move the tail pointer
 
             // If the node has a next node, push it into the priority queue
             if (node->next) {
                 pq.push(node->next);
             }
         }
 
         return head->next;  // Return the merged list (skipping the dummy node)
     }
 };
  