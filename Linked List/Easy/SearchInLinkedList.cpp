class Solution {
  public:
    bool searchKey(Node* head, int key) {
        // Code here
        Node* temp = head; // assign head to temp, because we don't want to lose head
        while (temp != nullptr) { // traverse the linked list until temp becomes null
            if (temp -> data == key) { // if the data of current node is equal to key
                return true; 
            }
            temp = temp -> next; // move temp to next node
        }
        return false;
    }
};