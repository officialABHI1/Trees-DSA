/*

  This program basically contains the basics of Tree :
  a) node creation
  b) node value assignment
  c) nodes association assigment

*/


#include<bits/stdc++.h>
using namespace std;

Struct Node{

int val;  // store the value of the node
   
Node *left  = NULL; // store the address of left child
Node *right = NULL; // store the address of right child

};

int main(){

//creation of the nodes 

Node *root  = new Node;
Node *node1 = new Node;
Node *node2 = new Node;
Node *node3 = new Node;
Node *node4 = new Node;


//assign the values in each node
root->val =90;
node1->val =10;
node2->val =20;
node3->val = 11;
node4->val =13;

//assiging the relationship between nodes

root->left=node1;
root->right = node2;
node1->left =node3;
node1->right =node4;

//tree traversals

// inOrder(root)<<endl;
 
}
