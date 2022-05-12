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
private:
    void sumLeft(TreeNode *root, int &sum) {
        if(root == NULL)
            return;
        
        // condition for left leaf
        if(root->left != NULL)
            if(root->left->left == NULL && root->left->right == NULL)
                sum += root->left->val;
        
        sumLeft(root->left, sum);
        sumLeft(root->right, sum);
    }

public:
    int sumOfLeftLeaves(TreeNode* root) {
        if((root == NULL) or (root->left == NULL && root->right == NULL))
            return {};
        
        int sum = 0;
        
        sumLeft(root, sum);
        
        return sum;
    }
};
