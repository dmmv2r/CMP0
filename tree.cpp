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

void printInorder() {
   cout << "in printInorder" << endl;
}

void printPreorder() {
   cout << "in printPreorder" << endl;
}

void printPostorder() {
   cout << "in printPostorder" << endl;
}

