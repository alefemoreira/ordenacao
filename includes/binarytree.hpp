#ifndef _BINARYTREE_H_
#define _BINARYTREE_H_

#include <iostream>

class Node {
  private:
    int info;
    bool deleted;
    Node* left = NULL;
    Node* right = NULL;
  public:
    Node(int info);
    ~Node();
    static Node* createNode(int info);
    int getInfo();
    void setInfo(int info);
    Node* getLeft();
    bool setLeft(Node* node);
    Node* getRight();
    bool setRight(Node* node);
};

class Tree {
  private:
    Node* root = NULL;
    bool insert(Node** root, int value);
    void print(Node* node);
  public:
    Tree();
    ~Tree();
    void print();
    bool insert(int value);
    Node* find(int value);
    bool remove(int value);
};

#endif  // _BINARYTREE_H_