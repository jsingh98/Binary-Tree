#pragma once // LESS PORTABLE
#include <iostream>
#include <string>
using namespace std;

struct node {
	char data;
	node* prev;
	node* left;
	node* right;

	node(char data) {
		this->data = data;
		left = NULL;
		right = NULL;
		prev = NULL;
	}

	node() {
		left = NULL;
		right = NULL;
		prev = NULL;
	}
};

class BT{
protected: node* root;

public:
	BT() { 
		root = NULL;
	}
	~BT();
	node* getRoot() { return root; }
	void setRoot(node* root) { this->root = root; }
	void destroy(node*);
	void inorder(node* p) const
	{
		if (p != NULL)
		{
			inorder(p->left);
			cout << p->data << " ";
			inorder(p->right);
		}
	}

	void preorder(node* p) const
	{
		if (p != NULL)
		{
			cout << p->data << " ";
			preorder(p->left);
			preorder(p->right);
		}
	}

	void postorder(node* p) const
	{
		if (p != NULL)
		{
			postorder(p->left);
			postorder(p->right);
			cout << p->data << " ";
		}
	}




};

BT::~BT() {
	destroy(root);
}

void BT::destroy(node* p) {
	if (p != NULL) {
		destroy(p->left);
		destroy(p->right);
		cout << "\ninside destroy";
		delete p;
	}
}

