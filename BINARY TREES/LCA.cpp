
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr){}
                                               
};
class Solution
{
public:
    //  1,2 ---------------------------------------
    bool ExistsInTree(TreeNode *root, TreeNode *target)
    {
        if (root == nullptr)
            return false;
        if (root == target)
            return true;
        return ExistsInTree(root->left, target) ||
               ExistsInTree(root->right, target);
    }

    TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q)
    {

        // 1-----------------------------
        // if(root == p || root == q) return root;
        // else if(ExistsInTree(root->left, p) && ExistsInTree(root->right, q))
        // return root; else if(!ExistsInTree(root->left, p) &&
        // !ExistsInTree(root->right, q)) return root; else
        // if(ExistsInTree(root->left, p) && !ExistsInTree(root->right, q))
        // return lowestCommonAncestor(root->left, p, q); else return
        // lowestCommonAncestor(root->right, p ,q);

        // 2-----------------
        // if (ExistsInTree(root->left, p) && ExistsInTree(root->left, q))
        //     return lowestCommonAncestor(root->left, p, q);
        // else if (ExistsInTree(root->right, p) && ExistsInTree(root->right,
        // q))
        //     return lowestCommonAncestor(root->right, p, q);
        // return root;

        // 3------------------------------------
        if (root == nullptr || root == p || root == q)
            return root;
        TreeNode *left = lowestCommonAncestor(root->left, p, q);
        TreeNode *right = lowestCommonAncestor(root->right, p, q);

        if (left && right)
            return root;
        else if (left && !right)
            return left;
        else
            return right;
    }
};