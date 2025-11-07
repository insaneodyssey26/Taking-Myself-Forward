class Solution {
public:
    void deleteNode(ListNode* node) { 
        node -> val = node -> next -> val;  // copy the value of next node to current node
        node -> next = node -> next -> next; // link current node to the node after next node
    }
};