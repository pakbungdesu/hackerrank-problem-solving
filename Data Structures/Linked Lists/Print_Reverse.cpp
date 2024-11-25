
void reversePrint(SinglyLinkedListNode* llist) {
    if(llist == nullptr){
        return;
    } else {
        reversePrint(llist->next);
        cout << llist->data << endl;
    }
}
