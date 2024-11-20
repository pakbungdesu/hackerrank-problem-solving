
int getNode(SinglyLinkedListNode* llist, int positionFromTail) {
    int count = 0, res;
    SinglyLinkedListNode* head = llist;
    while(head != nullptr){
        count++;
        head = head->next;
    }

    while(llist != nullptr){
        count--;
        if(count == positionFromTail){
            res = llist->data;
        }
        llist = llist->next;
    }
    return res;
}
