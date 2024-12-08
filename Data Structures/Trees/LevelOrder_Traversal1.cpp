
int height(Node* root) {
    if (root == nullptr) {
        return 1;
    }

    int lh = height(root->left);
    int rh = height(root->right);

    return 1 + std::max(lh, rh);
}

void printCurrLevel(Node* root, int level){
        if (root == nullptr)
        {
            return;
        }
        if (level == 1)
        {
            cout << root->data << " ";
        }
        else if (level > 1)
        {
            printCurrLevel(root->left,level-1);
            printCurrLevel(root->right,level-1);
        }
}

void levelOrder(Node* root) {
    int h = height(root);
    for(int i = 0; i < h; i++){
        printCurrLevel(root, i);
    }
}
