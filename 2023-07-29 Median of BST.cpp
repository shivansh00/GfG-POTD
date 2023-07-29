void inOrder(struct Node* node, vector<int> &list) {
    if (!node)  return;
    inOrder(node->left, list);
    list.push_back(node->data);
    inOrder(node->right, list);
}

float findMedian(struct Node *root) {
    //Code here
    vector<int> list;
    inOrder(root, list);
    int n= list.size();
    if (n & 1)
        return list[n/2];
    else    return (list[n/2]+ list[n/2-1])/2.0f;
}
