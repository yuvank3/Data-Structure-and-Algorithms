#include <iostream>
#include <vector>
using namespace std;

int idx = -1;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

// Preorder traversal
void preorder(Node* root) {
    if (root == NULL)
        return;

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

// Build binary tree
Node* buildtree(vector<int>& nodes) {
    idx++;

    if (nodes[idx] == -1)
        return NULL;

    Node* root = new Node(nodes[idx]);

    root->left = buildtree(nodes);
    root->right = buildtree(nodes);

    return root;
}

// Convert to sum tree
int sumTree(Node* root) {
    if (root == NULL)
        return 0;

    int leftsum = sumTree(root->left);
    int rightsum = sumTree(root->right);

    root->data += leftsum + rightsum;

    return root->data;
}

int main() {

    vector<int> nodes = {
        1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1
    };

    Node* root = buildtree(nodes);

    cout << "Before conversion: ";
    preorder(root);

    cout << endl;

    sumTree(root);

    cout << "After conversion: ";
    preorder(root);

    return 0;
}
