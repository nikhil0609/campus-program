#include<iostream>
using namespace std;

struct BST{
	int data;
	BST *right;
	BST *left;
}*root, *parentptr, *nodeptr, *newnode,*temp, *current;

void preorder(struct BST *root){
	if(root!=NULL){
		cout<<root->data<<" ";
		preorder(root->left);
		preorder(root->right);
	}
} 

void inorder(struct BST *root){
	if(root!=NULL){
		inorder(root->left);
		cout<<root->data<<" ";
		inorder(root->right);
	}
} 

void postorder(struct BST *root){
	if(root!=NULL){
		postorder(root->left);
		postorder(root->right);
		cout<<root->data<<" ";
	}
} 

void create(){
	newnode = new BST;
	cout<<"enter element = ";
	cin>>newnode->data;
	newnode->left=NULL;
	newnode->right=NULL;
}

void insertion(){
	create();
	if(root==NULL) root=newnode;
	else{
		parentptr = NULL;
		nodeptr = root;
		while(nodeptr!=NULL){
			parentptr = nodeptr;
			if(newnode->data>nodeptr->data) nodeptr=nodeptr->right;
			else nodeptr=nodeptr->left;
		}
		if(newnode->data>parentptr->data) parentptr->right=newnode;
		else parentptr->left=newnode;
	}
	cout<<"node inserted"<<endl;
}

struct BST * minValueNode(struct BST* node) 
{ 
    current = node; 
    //loop down to find the leftmost leaf 
    while (current && current->left != NULL) 
        current = current->left; 
    return current; 
} 

struct BST *deleteNode(struct BST *root, int data){
    if(root == NULL) return root;
    //item lies in left subtree
    if(data<root->data) root->left = deleteNode(root->left,data);
    //item lies in right subtree
    else if(data>root->data) root->right = deleteNode(root->right,data);
    else{
        //node with only child
        if(root->left == NULL){
            temp = root->right;
            delete root;
            return temp;
        }
        else if(root->right == NULL){
            temp = root->right;
            delete root;
            return temp;
        }
        //Node with 2 children : Get inorder successor
        temp = minValueNode(root->right);
        //copy inoder successor's content to this Node
        root->data = temp->data;
        //delete inoder successor
        root->right = deleteNode(root->right,temp->data);
    }
    cout<<"Node deleted successfully\n";
}

int main(){
    int choice;
    do{
        cout<<"Enter Choice\n";
        cout<<"1 - Insertion\n";
        cout<<"2 - Deletion\n";
        cout<<"3 - Inorder trversal\n";
        cout<<"4 - Preorder trversal\n";
        cout<<"5 - Postorder trversal\n";
        cout<<"Press 0 to exit\n";
        cin>>choice;
        switch(choice){
            case 1:
                insertion();
                break;
            case 2:
                int item;
                cout<<"Enter Item to be deleted = ";
                cin>>item;
                deleteNode(root,item);
                break;
            case 3:
                inorder(root);
                break;
            case 4:
                preorder(root);
                break;
            case 5:
                postorder(root);
                break;
        }
    }while(choice != 0);
    return 0;
}
