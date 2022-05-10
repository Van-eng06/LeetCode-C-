/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    // we are using pre order traversal to check whether a node is good node or not
    int count=0;
    void count_node(TreeNode* root,int mx){
        if(!root)
            return;
        if(root->val>=mx) //if the value of node greater then current max then the node is good node and we increase count by 1
            count++;
        mx=max(mx,root->val); //root
        count_node(root->left,mx);  //left
        count_node(root->right,mx);  //right
    }
    int goodNodes(TreeNode* root) {
        int mx=INT_MIN; // initializing a minimum value to start with the comparision of node
        count_node(root,mx);
        return count;
    }
};
