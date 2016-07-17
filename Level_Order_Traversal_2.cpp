#include<iostream>
#include<vector>

usng namespaces std;

class Solution
{
public:
  vector<vector<int>> BinaryTree_LevelOrder_Traversal_BFS(TreeNode* root)
  {
  	vector<vector<int>> res;
  	queue<TreeNode*> q;
  	TreeNode* front;
  	vector<int> temv;
  
  	if (nullptr == root)
  		return res;
  	//BFS
  	q.push(root);
  	q.push(NULL);
  	while (!q.empty())
  	{
  		front = q.front();
	  	q.pop();
	  	if (front)
	  	{
	  		temv.push_back(front->val);
	  		if (front->left)
  				q.push(front->left);
  			if (front->right)
	  			q.push(front->right);
	  	}
  		else if (!temv.empty())    //  notice the difference between the "if" and "else if" here 
  		//  if the "if(front){...}" above be implemented, this "else if" chunk will not be implemented.
  		//So only if (front is NULL) && (temv is not empty), we implement this chunk
  		{
  			res.push_back(temv);
  			temv.clear();
  			q.push(NULL);
  		}
  	}
	  return res;
  } 
};

int main()
{
  cin.get();
  return 0;
}
