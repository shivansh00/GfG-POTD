class Solution {
    Node* ptr= new Node(-1);
    Node* head= ptr;
  public:
    Node* findIntersection(Node* head1, Node* head2) {
        // code goes here.
        while (head1 and head2)
            if (head1->data < head2->data)
                head1= head1->next;
            else if (head1->data > head2->data)
                head2= head2->next;
            else {
                ptr->next= new Node(head1->data);
                ptr= ptr->next;
                head1= head1->next;
                head2= head2->next;
            }
        ptr= head;
        head= head->next;
        delete ptr;
        return head;
    }
};
