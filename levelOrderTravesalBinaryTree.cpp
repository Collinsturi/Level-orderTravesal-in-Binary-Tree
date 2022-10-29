#include<iostream>
#include<queue>
using namespace std;

struct node{
	char data;
	node* left;
	node* right;
};

void levelOrder(node* root){
	if(root == NULL){return;}
	
	queue<node*> Q;
	Q.push(root);
	
	while(!Q.empty()){
		node* current = Q.front();
		cout<<current->data<<", ";
		if(current->left != NULL){
			Q.push(current->left);
		}
		if(current->right != NULL){
			Q.push(current->right);
		}
		Q.pop();
	}
}
node* getNewNode(char data){
	node* temp = new node;
	temp->data = data;
	temp->left = NULL;
	temp->right = NULL;
	
	return temp;
}
node* insert(node* root, char data){
	if(root == NULL){
		root = getNewNode(data);
	}else if(data <= root->data){
	   root->left = insert(root->left, data);
	}else{
		root->right = insert(root->right, data);
	}
	
	return root;
}
int main(){
	node* root = NULL;
	
	root = insert(root, 'A');
	root = insert(root, 'B');
	root = insert(root, 'C');
	root = insert(root, 'D');
	root = insert(root, 'E');
	root = insert(root, 'F');
	root = insert(root, 'G');
	root = insert(root, 'H');
	
	cout<<"The elements are: "; 
	levelOrder(root);
}
