
int height(Node* root) {
    if (root == nullptr) {
        return -1; // The problem does not count height of root, so -1
    }
    // Recursively calculate the height of the left and right
    int lh = height(root->left);
    int rh = height(root->right);
    // Return the maximum height and + 1 (for the current)
    return 1 + std::max(lh, rh);
}