class Solution {
  public:
    int getCount(Node* head) {
        // Code here
        int count = 0;
        Node* temp = head; // assign head to temp, because we don't want to lose head
        while (temp != nullptr) { // traverse the linked list until temp becomes null
            count++; // increment count for each node
            temp = temp -> next; // move temp to next node
        }
        return count;
    }
};