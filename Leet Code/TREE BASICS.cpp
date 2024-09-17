#include<bits/stdc++.h>
using namespace std;

struct TreeNode{
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val){
        data=val;
        left=nullptr;
        right=nullptr;
    }
};

// In-order DFS: Left, Root, Right
void inOrderDFS(TreeNode* node){
    if(node==NULL) return;
    inOrderDFS(node->left);
    cout<<node->data<<" ";
    inOrderDFS(node->right);
}

// Pre-order DFS: Root, Left, Right
void preOrderDFS(TreeNode* node) {
    if (node == nullptr) return;
    cout << node->data << " ";
    preOrderDFS(node->left);
    preOrderDFS(node->right);
}

// Post-order DFS: Left, Right, Root
void postOrderDFS(TreeNode* node) {
    if (node == nullptr) return;
    postOrderDFS(node->left);
    postOrderDFS(node->right);
    cout << node->data << " ";
}

void BFS(TreeNode* root){
    if(root==NULL) return;
    queue<TreeNode*> q;
    q.push(root);
    while(!q.empty()){
        TreeNode* node=q.front();
        q.pop();
        cout<<node->data<<" ";
        if (node->left != nullptr) q.push(node->left);
        if (node->right != nullptr) q.push(node->right);
    }
}

int main(){
    // Initilize and allocate memory for tree nodes
    TreeNode* firstNode = new TreeNode(1);
    TreeNode* secondNode = new TreeNode(2);
    TreeNode* thirdNode = new TreeNode(3);
    TreeNode* fourthNode = new TreeNode(4);
    TreeNode* fifthNode = new TreeNode(5);

    // Connect binary tree nodes
    firstNode->left = secondNode;
    firstNode->right = thirdNode;
    secondNode->left = fourthNode;
    secondNode->right = fifthNode;

    cout<<"Inorder Traversal : ";
    inOrderDFS(firstNode);
    cout<<endl;

    cout<<"Preorder Traversal : ";
    preOrderDFS(firstNode);
    cout<<endl;

    cout<<"Postorder Traversal : ";
    postOrderDFS(firstNode);
    cout<<endl;

    cout<<"BFS Traversal : ";
    BFS(firstNode);
    cout<<endl;
    return 0;
}
