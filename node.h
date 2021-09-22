#ifndef NODE_H
#define NODE_H

#include <iostream>
#include <string>

using namespace std;

class Node {
  public:
   int key;
   string x;
   Node *parent;
   Node *left;
   Node *right;

   Node();
};


#endif
