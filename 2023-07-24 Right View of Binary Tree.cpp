class Solution {
    queue<Node*> q;
    vector<int> list;
    Node* node;
    int rnode;
public:
    //Function to return list containing elements of right view of binary tree.
    vector<int> rightView(Node *root) {
       // Your Code here
        q.push(root);
        q.push(nullptr);
        while (!q.empty()) {
            node= q.front();
            q.pop();
            if (!node) {
                list.push_back(rnode);
                if (q.empty())
                    break;
                q.push(nullptr);
                continue;
            }
            rnode= node->data;
            if (node->left)  q.push(node->left);
            if (node->right) q.push(node->right);
        }
        return list;
    }
};
