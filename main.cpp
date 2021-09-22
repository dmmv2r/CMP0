#include <iostream>
#include <string>
#include <fstream>

#include "node.h"
#include "tree.h"

using namespace std;


int main(int argc, char* argv[]) {
   
   const int SIZE = 50;
   string words[SIZE];
   string word;

   bool flag = true; //used to stop user input
   int arrIndex = 0;

   if(argc > 2) {
      cout << "Invalid arguments" << endl;
      cout << "Exitting program" << endl;
      return -1;

   } else if(argc < 2) { //file was not given and reads user input into an array
      cout << "file  not given" << endl;
      cout << "Begin reading from keyboard. Enter 'end' when finished" << endl;
      while(flag) {
         cin >> word;
         if(word == "end") {
            flag = false;
         } else {
            words[arrIndex] = word;
            arrIndex++;
         }
      }

   } else { //file was given and reads each word in file into an array
      fstream file;
      string word;
      string filename(argv[1]);
      bool empty = true;

      filename += ".fl2021"; //adds proper extension

      file.open(filename.c_str());

      while(file >> word) {
         if(word == "" && empty) { //detects if file is empty
            cout << "empty file was given" << endl;
            return 0;
         } else {
            empty = false;
         }

         words[arrIndex] = word;
         arrIndex++;
      }

      file.close();
   }

   Node *root;
   int index;

   for(int i = 0; i < arrIndex; i++) {
      index = 0;
      buildTree(root, words[i], index);
   }

   printPreorder(root);
   printInorder(root);
   printPostorder(root);

   cout << "bye bye" << endl;
   return 0;
}
