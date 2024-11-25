
SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* llist) {
    if (llist == nullptr) {
        return llist;
    }

    SinglyLinkedListNode* current = llist;
    while (current != nullptr) {
        SinglyLinkedListNode* runner = current;
        while (runner->next != nullptr && runner->next->data == current->data) {
            runner = runner->next;
        }
        current->next = runner->next;
        current = current->next;
    }

    return llist;
}
