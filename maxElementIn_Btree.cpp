#include<bits/stdc++.h>
using namespace std;



struct Node
{
    int key;
    struct Node *right;
    struct Node *left;
    Node(int key)
    {
       this->key=key;
        left = right = NULL;
    }
};


void inorder(struct Node *root)
{   
    if(root==NULL)
        return;
    inorder(root->left);    //for post order left,right ,cout<<root
    cout<<root->key<<" ";   //for pre order cout<<root, left,right 
    inorder(root->right);
    
}

int numberofnodes(struct Node *root)
{
	if(root==NULL)
		return 0;
	
	return 1 + numberofnodes(root->left) + numberofnodes(root->right);
}

int maxele(struct Node *root) //maxelement in Btree
{
	if(root == NULL)
		return INT_MIN;
	else
		return max(root->key,max(maxele(root->left),maxele(root->right))); //compare max(root,max(left and right)) using recursion 
}
int main()
{
    struct Node* root=new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left= new Node(40);
    cout<<"INORDER"<<endl;
    inorder(root);
    cout<<endl;
    int numnodes=numberofnodes(root);
    cout<<"No of nodes - - >"<<numnodes;
    cout<<endl;
    int max_element=maxele(root);
    cout<<"Max element - - >"<<max_element;
    return 0;
}
