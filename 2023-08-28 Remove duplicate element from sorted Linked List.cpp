Node *removeDuplicates(Node *head) {
 // your code goes here
    Node *node= head;
    while (node and node->next) {
        if (node->data == node->next->data)
            node->next= node->next->next;
        else    node= node->next;
    }
    return head;
}
