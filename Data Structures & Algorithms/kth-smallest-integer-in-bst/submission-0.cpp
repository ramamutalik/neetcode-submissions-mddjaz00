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

    void findLeft(TreeNode* root, vector<int>& left)
    {
        if(root==nullptr){
            return;
        }
        findLeft(root->left, left);
        left.push_back(root->val);
        findLeft(root->right, left);
    }
    int kthSmallest(TreeNode* root, int k) {
        if(root==nullptr){
            return -1;
        }
        vector<int> left;
        findLeft(root->left, left);
        if(left.size()>=k){
            return left[k-1];
        }
        else if(k==left.size()+1){
            return root->val;
        }
        else{
            vector<int> right;
            findLeft(root->right, right);
            if(right.size()+left.size()+1>=k){
                return right[k-left.size()-1-1];
            }
        }
        return -1;
    }
};
