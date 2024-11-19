
SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* llist, int data, int position) {
    int n = 0;
    SinglyLinkedListNode* curr = llist;
    SinglyLinkedListNode* before = nullptr;
    SinglyLinkedListNode* newNode = new SinglyLinkedListNode(data);

    while (curr != nullptr) {
        if (n == position) {
            if (before) {
                before->next = newNode;
            } else {
                // Inserting at the head
                newNode->next = llist;
                return newNode;
            }
            newNode->next = curr;
            return llist;
        }
        before = curr;
        curr = curr->next;
        n++;
    }

    // If position is equal to the size of the list, append at the end
    if (n == position) {
        if (before) {
            before->next = newNode;
        } else {
            // The list is empty, the new node becomes the head
            return newNode;
        }
        return llist;
    }

    // Return the original list if the position is invalid
    return llist;
}
