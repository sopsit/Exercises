#include <iostream>

using namespace std;


class node {
public:
	int data;
	node* left;
	node* right;
    node* new_Node(int d)
    {
	node* Node = new node();
	Node->data = d;
	Node->left = NULL;
	Node->right = NULL;
	return (Node);
    }
};

bool isSubtree(node* T, node* S)
{
	
	if (S == NULL)
		return true;

	if (T == NULL)
		return false;

	if(T->data == S->data)
	{
		if(isSubtree(T->left, S->left) && isSubtree(T->right, S->right))
		return true;
	}	
	else
	{
		if(isSubtree(T->left, S) || isSubtree(T->right, S))
		return true;
	}
	return false;

}

int main()
{
	// TREE T

	node* T = T->new_Node(26);
	T->right = T->new_Node(3);
	T->right->right = T->new_Node(3);
	T->left = T->new_Node(10);
	T->left->left = T->new_Node(4);
	T->left->left->right = T->new_Node(30);
	T->left->right = T->new_Node(6);

	// TREE S

	node* S = S->new_Node(10);
	S->right = S->new_Node(6);
	S->left = S->new_Node(4);
	S->left->right = S->new_Node(30);

	if (isSubtree(T, S))
		cout << "Tree S is subtree of Tree T";
	else
		cout << "Tree S is not a subtree of Tree T";

	return 0;
}




