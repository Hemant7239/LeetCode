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
    int height(TreeNode* root)
    {
        if(root==	NULL)
	{
		return 0;
	}
	int a=height(root->left);
	int b=height(root->right);
	return max(a+1,b+1);
        /*if(root==NULL)
        {
            return 0;
        }
        int sum1=countNode(root->left);
        int sum2=countNode(root->right);
        return 1+sum1+sum2;*/
    }
    bool isBalanced(TreeNode* root) {
        if(root==NULL)
        {
            return true;
        }
        if(abs(height(root->left)-height(root->right))>1)
        {
            return false;
        }
        bool ans1=isBalanced(root->left);
        bool ans2=isBalanced(root->right);
        int a=height(root->left);
        int b=height(root->right);
        if(abs(a-b)>1)
        {
            return false;
        }
        else if(ans1==false || ans2==false )
        {
            return false;
        }
        
        else{
          return true;
        }
    }
};