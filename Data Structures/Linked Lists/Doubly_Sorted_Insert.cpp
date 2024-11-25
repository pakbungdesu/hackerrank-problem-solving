
DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* llist, int data) {
    DoublyLinkedListNode* dummy = new DoublyLinkedListNode(0);
    dummy->next = llist;
    llist->prev = dummy;
    DoublyLinkedListNode* newNode = new DoublyLinkedListNode(data);
    while(llist->next != nullptr){
        if(llist->data > newNode->data) {break;}
        llist = llist->next;
    }

    if(llist->next == nullptr && llist->data < newNode->data){
        llist->next = newNode;
    } else {
        llist->prev->next = newNode;
        newNode->next = llist;
    }
    return dummy->next;
}
