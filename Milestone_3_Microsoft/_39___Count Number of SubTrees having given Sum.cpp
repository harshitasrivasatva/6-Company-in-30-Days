int solve(Node* root,int &ans,int tar)
{
    if(!root)
      return 0;

    int a =solve(root->right,ans,tar);
    int b =solve(root->left,ans,tar);

    int sum = a+b+root->data;

    if(sum==tar)
       ans++;

    return sum;
}

int countSubtreesWithSumX(Node* root, int tar)
{
	// Code here
	int ans =0;

	solve(root,ans,tar);
	return ans;
}
