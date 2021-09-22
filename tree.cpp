#include <iostream>
#include <string>

#include "node.h"

using namespace std;

void buildTree(Node *root, string word, int index) {
   if(root->x == "") {
      root->x = word;
      root->key = index;
      return;
   } else if(root->x[0] == word[0]) {
      root->x += ", ";
      root->x += word;
      return;
   }

   if(root->x[0] < word[0]) {
      index++;
      buildTree(root->right, word, index);
   } else {
      index++;
      buildTree(root->left, word, index);
   }

   return;
}

void printInorder(Node* node) {
   cout << "in printInorder" << endl;

   if(node == NULL) {
      return;
   }

   printInorder(node->left);

   cout << node->x << endl;

   printInorder(node->right);
}

void printPreorder(Node* node) {
   cout << "in printPreorder" << endl;

   if(node == NULL) {
      return;
   }

   cout << node->x << endl;

   printPreorder(node->left);

   printPreorder(node->right);
}

void printPostorder(Node* node) {
   cout << "in printPostorder" << endl;

   if(node == NULL) {
      return;
   }

   printPostorder(node->left);

   printPostorder(node->right);

   cout << node->x << endl;
}

