
DoublyLinkedListNode* reverse(DoublyLinkedListNode* llist) {
    DoublyLinkedListNode* before = nullptr, *after = nullptr;
    DoublyLinkedListNode* current = llist;

    while(current != nullptr){
        after = current->next;
        current->next = before;
        current->prev = after;
        before = current;
        current = after;
    }
    return before;
}
