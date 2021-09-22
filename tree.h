#ifndef TREE_H
#define TREE_H

#include <string>
#include "node.h"

using namespace std;

void buildTree(Node *root, string word, int index);
void printInorder(Node* node);
void printPreorder(Node* node);
void printPostorder(Node* node);

#endif
