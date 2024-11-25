
bool has_cycle(SinglyLinkedListNode* head) {
    if (head == nullptr || head->next == nullptr) {
        return false;
    }

    SinglyLinkedListNode* slow = head;
    SinglyLinkedListNode* fast = head->next;

    while (slow != fast) {
        if (fast == nullptr || fast->next == nullptr) {
            return false;
        }
        slow = slow->next;
        fast = fast->next->next;
    }

    return true;
}
