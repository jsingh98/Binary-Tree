// written by Jupraj and Arslan

#pragma once
#include "BinaryTree.h"
#include <string>
#include <iostream>

using namespace std;


class ET : public BT {
public:

	// takes a math expression and stores the data into a tree
	void expressionToTree(string s) {
		cout << s << endl;
		// creating a node to traverse through the binary tree
		if (root == NULL) {
			root = new node();
		}
		node* traverse = root;
		//reading the string
		for (int i = 0; i < s.length(); i++) {
			if (s[i] == '(') {
				traverse->left = new node();
				traverse->right = new node();
				traverse->left->prev = traverse;
				traverse->right->prev = traverse;
				traverse = traverse->left;
			}
			if (isdigit(s[i])) {
				traverse->data = s[i];
				traverse = traverse->prev; 
			}
			if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/') {
				traverse->data = s[i];
				traverse = traverse->right;
			}
			if (s[i] == ')') {
					traverse = traverse->prev;
					cout << endl << s << endl << endl;
			}
		}
	
	}

		void treeToExpression() {
			cout << "TREE TO EXPRESSION" << endl;
			inorder(root);
		}

	};







