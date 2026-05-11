#include<stdio.h>
#include<stdlib.h>
struct trees
{
	struct trees*left;
	int data;
	struct trees*right;
};
struct trees *create()
{
	struct trees*newnode=0;
	int a;
	printf("\n enter data(-1 for no nodes): ");
	scanf("%d",&a);
	if(a==-1)
	{
		return 0;
	}
	newnode=(struct trees*)malloc(sizeof(struct trees));
	newnode->data=a;
	printf("\n enter left child of %d",a);
	newnode->left=create();
	printf("\n enter right child of %d",a);
	newnode->right=create();
	return newnode;	
}
void preorder(struct trees*root)
{
    if(root==NULL)
	{
		return;
	}	
	printf("\t %d",root->data);
	preorder(root->left);
	preorder(root->right);
}
void inorder(struct trees*root)
{
	if(root==NULL)
	{
		return;
	}
	inorder(root->left);
	printf("\t %d",root->data);
	inorder(root->right);
}
void postorder(struct trees*root)
{
	if(root==NULL)
	{
		return;
	}
	preorder(root->left);
	preorder(root->right);
	printf("\t %d",root->data);
}
int main()
{
	struct trees *root;
	create();
	printf("\n preorer travera of ");
	
}
