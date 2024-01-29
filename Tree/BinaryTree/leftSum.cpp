void getsum(BinaryTreeNode<int> *root,long long  &sum)
{
	if(!root)
	return;

     if(root->left)
	 {
       sum+=root->left->data;
	 }
    
	getsum(root->left,sum);
	getsum(root->right,sum);

}
long long leftSum(BinaryTreeNode<int> *root)
{
	// Write your code here.
	long long sum=0;
	getsum(root,sum);
	return sum;
}