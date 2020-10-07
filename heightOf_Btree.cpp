#include<bits/stdc++.h>
using namespace std;



//btree rule if you have 7 nodes possible height is 1.44 * log2(7) -->4.04 , so maximum height can be 4 it cant be more than that
// important rule


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

int height(struct Node* root)
{
	if(root == NULL)
	{
		return 0;
	}
	else
	{
		return max(height(root->left),height(root->right))+1;
	}
}
/* height of b tree

	10
      /	   \
     20    30
    /
   40

height is 3
no of edges = height - 1 = 2 

*/
int main()
{
    struct Node* root=new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left= new Node(40);
    cout<<"INORDER"<<endl;
    inorder(root);
    cout<<"height"<<endl;
    int res1 =height(root);
    cout<<res1;
    return 0;
}
