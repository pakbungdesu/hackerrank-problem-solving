
int height(Node* root) {
    if (root == nullptr) {
        return -1; // The problem does not count height of root, so -1
    }

    // Recursively calculate the height of the left and right
    int leftHeight = height(root->left);
    int rightHeight = height(root->right);

    // Return the maximum height and + 1 (for the current)
    return 1 + std::max(leftHeight, rightHeight);
}