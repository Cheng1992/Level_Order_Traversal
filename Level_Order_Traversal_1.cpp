#include<iostream>
#include<vector>

using namespace std;

Solution
{
public:
  vector<int> Solution::BinaryTree_LevelOrder_Traversal_BFS1(TreeNode* root)
  {
    vector<int> res;
  	queue<TreeNode*> q;
	  TreeNode* front;

	  if (nullptr == root)
	  {
	  	return res;
	  }

	  //BFS
  	q.push(root);
  	while (!q.empty())
  	{
	  	front = q.front();
	  	q.pop();
	  	if (front)
	  	{
	  		res.push_back(front->val);  // 每处理一个节点，就同时把它的左右子节点一起放进去
  			if (front->left) 
  				q.push(front->left);
  			if (front->right)
  				q.push(front->right);
	  	}
	  	//res.push_back(temp);
	  }
  	return res;
  }
};

int main()
{
  cin.get();
  return 0;
}
