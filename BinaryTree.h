#pragma once // LESS PORTABLE
#include <iostream>
#include <string>

//WHENEVER YOU USE DYNAMIC MEMORY, COPY CONSTRUCTOR, DESTRUCTOR, AND OVERLOADING OPERATOR = 

struct node {
	char data;
	node* left;
	node* right;
};

class binaryTree{
	node* root;

public:
	// using constructor initializer to set root to NULL
	binaryTree() : root(NULL) {}
	//copy constructor
	binaryTree(const binaryTree &bin) {
		if (isEmpty())
		{
			root = NULL;
		}
	
	};
	~binaryTree();

	void addNode(){}
	// helper function
	inline bool isEmpty() { return root==NULL; }

};

