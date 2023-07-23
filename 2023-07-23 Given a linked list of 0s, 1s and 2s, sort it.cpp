class Solution {
    vector<int> fm= vector<int>(3);
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        // Add code here
        Node *node= head;
        while (node) {
            fm[node->data]++;
            node= node->next;
        }
        node= head;
        for (int i= 0; i < 3; i++) {
            while (fm[i]--) {
                node->data= i;
                node= node->next;
            }
        }
        return head;
    }
};
