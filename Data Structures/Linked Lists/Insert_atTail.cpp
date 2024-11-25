
SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
    SinglyLinkedListNode* newNode = new SinglyLinkedListNode(data);
    if(head != nullptr){
        SinglyLinkedListNode* curr = head;

        while(curr->next != nullptr){
            curr = curr->next;
        }

        curr->next = newNode;
        return head;
    }
    return newNode;
}
