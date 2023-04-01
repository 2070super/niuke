/*
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};*/

#include <vector>
class Solution {
public:
	vector<TreeNode*> v;
	void search(TreeNode *root)
	{
		if(root->left)
		{
			search(root->left);
		}
		v.push_back(root);
		if(root->right)
		{
			search(root->right);
		}
	}

	void construction()
	{
		for(int i=0;i<v.size()-1;i++)
		{
			v[i]->right=v[i+1];
			v[i+1]->left=v[i];
		}
	}
    TreeNode* Convert(TreeNode* pRootOfTree)
	{
        if(pRootOfTree==nullptr)
		{
			return nullptr;
		}
		search(pRootOfTree);
		construction();
		return v[0];
    }
};
