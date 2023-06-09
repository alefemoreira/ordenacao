#include "../includes/binarytree.hpp"
#include <iostream>

Tree::Tree() {}
Tree::~Tree() {}

bool Tree::insert(int value) {
  if (this->root == NULL) {
    this->root = Node::createNode(value);
    return this->root != NULL;
  }

  return this->insert(&this->root, value);
}

bool Tree::insert(Node **root, int value) {
  if ((*root)->getInfo() < value) {
    Node *left = (*root)->getLeft();
    if (left == NULL) {
      (*root)->setLeft(Node::createNode(value));
      return (*root)->getLeft() != NULL;
    }
    return this->insert(&left, value);
  }

  if ((*root)->getInfo() > value) {
    Node *right = (*root)->getRight();
    if (right == NULL) {
      (*root)->setRight(Node::createNode(value));
      return (*root)->getRight() != NULL;
    }
    return this->insert(&right, value);
  }

  return false;
}

void Tree::print() {
  if (this->root == NULL)
    return;

  this->print(this->root->getLeft());
  std::cout << this->root->getInfo() << " ";
  this->print(this->root->getRight());
}

void Tree::print(Node *node) {
  if (node == NULL)
    return;

  this->print(node->getLeft());
  std::cout << node->getInfo() << " ";
  this->print(node->getRight());
}

Node *Tree::find(int value) {
  if (this->root == NULL)
    return NULL;

  Node *aux = this->root;
  while (aux != NULL) {
    if (aux->getInfo() == value)
      return aux;

    if (aux->getInfo() < value)
      aux = aux->getLeft();
    else
      aux = aux->getRight();
  }
  return NULL;
}

bool Tree::remove(int value) {
  /*
   * 3 casos :
   * * remover nó folha:
   *   - apenas remover
   * * remover nó com um único filho:
   *   - trocar os valores do nó e remover o filhos
   * * remover nó com dois filhos
   *   - trocar com o valor do maior filho do filho
   *     da esquerda desse nó e remover o folha.
   */
  return false;
}


