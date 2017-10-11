//  Subsetted from:
//  Created by Frank M. Carrano and Tim Henry.
//  Copyright (c) 2013 __Pearson Education__. All rights reserved.

/** @file BinarySearchTree.cpp */
#include <iostream>


#include "BinarySearchTree.h"

// PRIVATE HELPER METHODS - IMPLEMENT THESE

template<typename ItemType, typename KeyType>
void BinarySearchTree<ItemType, KeyType>::destroyTree(BinaryNode<ItemType>* subTreePtr)
{
  if(subTreePtr!=nullptr){
    destroyTree(subTreePtr->getLeftChildPtr());
    destroyTree(subTreePtr->getRightChildPtr());
  }
}

template<typename ItemType, typename KeyType>
BinaryNode<ItemType>* BinarySearchTree<ItemType,KeyType>::insertInorder(BinaryNode<ItemType>* subTreePtr,
                                                                BinaryNode<ItemType>* newNodePtr)
{
  if(subTreePtr==nullptr){
    return(newNodePtr);
  }
  else if(((subTreePtr->getItem()).getename()) > ((newNodePtr->getItem()).getename())){
    BinaryNode<ItemType>* tempptr=insertInorder(subTreePtr->getLeftChildPtr(), newNodePtr);
    subTreePtr->setLeftChildPtr(tempptr);
  }
  else if(((subTreePtr->getItem()).getename()) < ((newNodePtr->getItem()).getename())){
    BinaryNode<ItemType>* tempptr=insertInorder(subTreePtr->getRightChildPtr(), newNodePtr);
    subTreePtr->setRightChildPtr(tempptr);
  }
  return(subTreePtr);
}

template<typename ItemType, typename KeyType>
BinaryNode<ItemType>* BinarySearchTree<ItemType, KeyType>::findNode(
				BinaryNode<ItemType>* subTreePtr, const KeyType& target) const
{
  if(((subTreePtr->getItem()).getename()) == target|| subTreePtr==nullptr){
    return(subTreePtr);
  }
  else if(((subTreePtr->getItem()).getename()) < target){
    return (findNode(subTreePtr->getRightChildPtr(), target));
  }
  else if(((subTreePtr->getItem()).getename()) > target){
    return(findNode(subTreePtr->getLeftChildPtr(), target));
  }
}
template<typename ItemType, typename KeyType>
void BinarySearchTree<ItemType, KeyType>::inorder(BinaryNode<ItemType>*Nodeptr, void visit(ItemType&))const{
  if(Nodeptr!=nullptr){
  inorder(Nodeptr->getLeftChildPtr(),visit);
  ItemType theItem= Nodeptr->getItem();
  visit(theItem);
  inorder(Nodeptr->getRightChildPtr(),visit);
  }
}
template<typename ItemType, typename KeyType>
void BinarySearchTree<ItemType, KeyType>::preorder(BinaryNode<ItemType>*Nodeptr, void visit(ItemType&))const{
  if(Nodeptr==nullptr){
    return;
  }
  ItemType theItem= Nodeptr->getItem();
  visit(theItem);
  preorder(Nodeptr->getLeftChildPtr(), visit);
  preorder(Nodeptr->getRightChildPtr(), visit);
}
template<typename ItemType, typename KeyType>
void BinarySearchTree<ItemType, KeyType>::postorder(BinaryNode<ItemType>*Nodeptr, void visit(ItemType&))const{
  if(Nodeptr==nullptr){
    return;
  }
  postorder(Nodeptr->getLeftChildPtr(), visit);
  postorder(Nodeptr->getRightChildPtr(), visit);
  ItemType theItem= Nodeptr->getItem();
  visit(theItem);
}
template<typename ItemType, typename KeyType>
BinaryNode<ItemType>* BinarySearchTree<ItemType, KeyType>::FindMin(BinaryNode<ItemType>* temp) const
{
  while(temp->getLeftChildPtr() != nullptr){
    temp=temp->getLeftChildPtr();
  }
  return temp;
}
template<typename ItemType, typename KeyType>
BinaryNode<ItemType>* BinarySearchTree<ItemType, KeyType>::getroot(BinaryNode<ItemType>*node){
  if(rootPtr==node){
    return rootPtr;
  }
  else{
    getroot(rootPtr->getLeftChildPtr());
    getroot(rootPtr->getRightChildPtr());
  }
}
template<typename ItemType, typename KeyType>
void BinarySearchTree<ItemType, KeyType>::remove1(BinaryNode<ItemType>* node, const KeyType& key){
  if(!(node==nullptr)){
    if(key < (node->getItem()).getename()){
      remove1(node->getLeftChildPtr(), key);
    }
    else if(key > (node->getItem()).getename()){
      remove1(node->getRightChildPtr(), key);
    }
    else{
      if(node->getLeftChildPtr()==nullptr && node->getRightChildPtr()==nullptr){
        delete node;
        node=nullptr;
      }
      else if(node->getLeftChildPtr() !=nullptr){
        BinaryNode<ItemType>* temp= node;
        BinaryNode<ItemType>* temp2= getroot(node);
        node= node->getRightChildPtr();
        temp2->setRightChildPtr(node);
        delete temp;
      }
      else if(node->getRightChildPtr() !=nullptr){
        BinaryNode<ItemType>* temp=node;
        BinaryNode<ItemType>* temp2= getroot(node);
        node=node->getLeftChildPtr();
        temp2->setLeftChildPtr(node);
        delete temp;
      }
      else{
        BinaryNode<ItemType>* temp=FindMin(node->getRightChildPtr());

        node->getItem()=temp->getItem();
        node->setRightChildPtr(temp);
        //node->getRightChildPtr()=remove1(node->getRightChildPtr(), (node->getItem()).getename());
      }
    }
  }
}

//////////////////////////////////////////////////////////////
//      PUBLIC METHODS BEGIN HERE
//////////////////////////////////////////////////////////////

template<typename ItemType, typename KeyType>
BinarySearchTree<ItemType, KeyType>::BinarySearchTree() : rootPtr(nullptr)
{
}

template<typename ItemType, typename KeyType>
BinarySearchTree<ItemType, KeyType>::~BinarySearchTree()
{
   this->destroyTree(rootPtr); // Call inherited method
}  // end destructor
//////////////////////////////////////////////////////////////
//      Public BinaryTreeInterface Methods Section - IMPLEMENT THESE
//////////////////////////////////////////////////////////////

template<typename ItemType, typename KeyType>
bool BinarySearchTree<ItemType, KeyType>::add(const ItemType& newData)
{
  BinaryNode<ItemType>* temp= new BinaryNode<ItemType>(newData);
  rootPtr=insertInorder(rootPtr, temp);
  return false;
}

template<typename ItemType, typename KeyType>
ItemType BinarySearchTree<ItemType, KeyType>::getEntry(const KeyType& aKey) const throw(NotFoundException)
{
  BinaryNode<ItemType>* temp=findNode(rootPtr, aKey);

  return (temp->getItem());
}

template<typename ItemType, typename KeyType>
bool BinarySearchTree<ItemType, KeyType>::contains(const KeyType& aKey) const
{
return false;
}
template<typename ItemType, typename KeyType>
void BinarySearchTree<ItemType, KeyType>::removepoke(const KeyType& aKey)  throw(NotFoundException)
{
  remove1(rootPtr, aKey);
}




//////////////////////////////////////////////////////////////
//      Public Traversals Section - IMPLEMENT THESE
//////////////////////////////////////////////////////////////

template<typename ItemType, typename KeyType>
void BinarySearchTree<ItemType, KeyType>::inorderTraverse(void visit(ItemType&)) const
{
  inorder(rootPtr, visit);
}
template<typename ItemType, typename KeyType>
void BinarySearchTree<ItemType, KeyType>::preorderTraverse(void visit(ItemType&)) const
{
  preorder(rootPtr, visit);
}
template<typename ItemType, typename KeyType>
void BinarySearchTree< ItemType, KeyType>::postorderTraverse(void visit(ItemType&)) const
{
  postorder(rootPtr, visit);
}
