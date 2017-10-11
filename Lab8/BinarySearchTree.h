//  Subsetted from:
//  Created by Frank M. Carrano and Tim Henry.
//  Copyright (c) 2013 __Pearson Education__. All rights reserved.

// Listing 16-4.

/** Link-based implementation of the ADT binary search tree.
 @file BinarySearchTree.h */

#ifndef _BINARY_SEARCH_TREE
#define _BINARY_SEARCH_TREE

#include "BinaryNode.h"
#include "NotFoundException.h"

template<typename ItemType, typename KeyType>
class BinarySearchTree
{
private:
   BinaryNode<ItemType>* rootPtr;

   // Recursively deletes all nodes from the tree.
   void destroyTree(BinaryNode<ItemType>* subTreePtr);

   // Recursively finds where the given node should be placed and
   // inserts it in a leaf at that point.
   BinaryNode<ItemType>* insertInorder(BinaryNode<ItemType>* subTreePtr,
                                       BinaryNode<ItemType>* newNode);

   // Returns a pointer to the node containing the given value,
   // or nullptr if not found.
   BinaryNode<ItemType>* findNode(BinaryNode<ItemType>* treePtr,
                                  const KeyType& target) const;
  //Recursively goes through the BST in inorder and calls the visit function
  void inorder(BinaryNode<ItemType>*Nodeptr, void visit(ItemType&))const;
  //Recursively goes through the BST in preorder and calls the visit function
  void preorder(BinaryNode<ItemType>*Nodeptr, void visit(ItemType&))const;
  //Recursively goes through the BST in postorder and calls the visit function
  void postorder(BinaryNode<ItemType>*Nodeptr, void visit(ItemType&))const;
  BinaryNode<ItemType>* FindMin(BinaryNode<ItemType>* temp)const;
  void remove1(BinaryNode<ItemType>* node, const KeyType& key);
  BinaryNode<ItemType>* getroot(BinaryNode<ItemType>*node);
public:
   //------------------------------------------------------------
   // Constructor and Destructor Section.
   //------------------------------------------------------------
   BinarySearchTree();
   virtual ~BinarySearchTree();

   //------------------------------------------------------------
   // Public Methods Section.
   //------------------------------------------------------------
   bool add(const ItemType& newEntry);
   ItemType getEntry(const KeyType& aKey) const throw(NotFoundException);
   bool contains(const KeyType& aKey) const;
   void removepoke(const KeyType& aKey) throw(NotFoundException);

   //------------------------------------------------------------
   // Public Traversals Section.
   //------------------------------------------------------------
   void inorderTraverse(void visit(ItemType&)) const;
   void preorderTraverse(void visit(ItemType&)) const;
   void postorderTraverse(void visit(ItemType&)) const;
}; // end BinarySearchTree

#include "BinarySearchTree.hpp"

#endif
