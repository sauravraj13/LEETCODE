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
    int mxpath(TreeNode* node,int &maxi){
        if(node==NULL){
            return 0;
        }
        int lhmxpath=max(0,mxpath(node->left,maxi));
        int rhmxpath=max(0,mxpath(node->right,maxi));
    maxi = max(maxi,lhmxpath+rhmxpath+node->val);
        return max(lhmxpath,rhmxpath) + node->val;
    }
        int maxPathSum(TreeNode* root) {
            int maxi= INT_MIN;
            mxpath(root,maxi);
            return maxi;

        }
    };
