
int findMergeNode(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {

    SinglyLinkedListNode* h1 = head1;
    SinglyLinkedListNode* h2 = head2;

    while(h1 != h2){
        (h1 != nullptr)? h1 = h1->next: h1 = head2;
        (h2 != nullptr)? h2 = h2->next: h2 = head1;
    }
    return h1->data;
}
