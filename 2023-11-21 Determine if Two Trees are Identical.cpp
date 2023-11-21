class Solution {
  public:
    //Function to check if two trees are identical.
    bool isIdentical(Node *r1, Node *r2) {
        //Your Code here
        if (!r1 and !r2)
            return true;
        if ((bool)r1 ^ (bool)r2)
            return false;
        if (r1->data != r2->data)
            return false;
        if (!isIdentical(r1->left, r2->left))
            return false;
        if (!isIdentical(r1->right, r2->right))
            return false;
        return true;
    }
};
