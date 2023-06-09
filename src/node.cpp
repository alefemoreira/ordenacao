#include "../includes/binarytree.hpp"
#include <iostream>

Node::Node(int info) {
  this->info = info;
  this->left = NULL;
  this->right = NULL;
}

Node::~Node() {
  if (this->left != NULL)
    delete this->left;

  if (this->right != NULL)
    delete this->right;
}

Node *Node::createNode(int info) {
  Node *node = new Node(info);
  return node;
}

int Node::getInfo() { return this->info; }
void Node::setInfo(int info) { this->info = info; }
Node *Node::getLeft() { return this->left; }
bool Node::setLeft(Node *node) {
  this->left = node;
  if (this->left != NULL) {
    return true;
  }
  return false;
}
Node *Node::getRight() { return this->right; }
bool Node::setRight(Node *node) {
  this->right = node;
  if (this->right != NULL) {
    return true;
  }
  return false;
}