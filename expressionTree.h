#pragma once
#include "BinaryTree.h"
#include <string>
#include <iostream>
using namespace std;

class ET : public BT {
	node* traverse;
public:

	ET() {
		traverse = NULL;
	}
	// takes a math expression and stores the data into a tree
	void expressionToTree(string s) {
		// creating a node to traverse through the binary tree
		if (root == NULL) {
			root = new node();
		}
		traverse = root;


		for (int i = 0; i < s.length(); i++) {
			if (s[i] == '(' ) {
				traverse->left = new node();
				traverse->right = new node();
				traverse->prev = traverse;
				traverse = traverse->left;
				cout << s[i];
			}
			if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/') {
				traverse->data = s[i];
				traverse->prev = traverse;
				traverse = traverse->right;
				cout << s[i];
			}
			if (isdigit(s[i])) {
				traverse->data = s[i];
				traverse = traverse->prev;
				cout << s[i];
			}
			if (s[i] == ')') {
				traverse = traverse->prev;
				cout << s[i];
			}
		}

	}

	void treeToExpression() {

	}





};