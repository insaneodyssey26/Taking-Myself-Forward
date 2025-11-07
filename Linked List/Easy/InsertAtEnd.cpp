class Solution {
  public:
    Node *insertAtEnd(Node *head, int x) {
        // Code here
        Node* newNode = new Node(x); // create a new node
        if (head == nullptr) { // if the list is empty
            head = newNode; // assign newNode to head
            return head; 
        }
        Node* temp = head; // assign head to temp, because we don't want to lose head
        while (temp -> next != nullptr) { // This condition means the next of temp is not null, in short we are traversing to the last node
            temp = temp -> next; // move temp to next node if next is not null
        }
        temp -> next = newNode; // assign newNode to the next of last node
        return head;
    }
};