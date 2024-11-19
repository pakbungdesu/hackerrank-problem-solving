
SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* llist, int position) {

    int count = 0;
    SinglyLinkedListNode* curr = llist;
    SinglyLinkedListNode* before = nullptr;

    while(curr != nullptr){
        if(count == position){
            if(before == nullptr){
                llist = llist->next;
            } else {
                before->next = curr->next;
            }
            break;
        }
        before = curr;
        curr = curr->next;
        count++;
    }
    return llist;
}
