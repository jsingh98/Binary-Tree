#include "BinaryTree.h"
#include "expressionTree.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
	ET b ;
	b.expressionToTree("((4/8) - (2+ 1))");
	b.treeToExpression();
	
	return 0;

}