class Solution {
    unordered_set<int> s;
public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates(Node *head) {
        // your code goes here
        Node *node, *ret= new Node(0);
        node= ret;
        while (head) {
            int x= head->data;
            if (s.find(x) == s.end()) {
                s.insert(x);
                node->next= new Node(x);
                node= node->next;
            }
            head= head->next;
        }
        node= ret;
        ret= ret->next;
        delete node;
        return ret;
    }
};
