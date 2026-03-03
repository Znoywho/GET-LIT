#pragma once
#include "../MODULE/algo.h"

struct Node {
  int Data;
  Node *RightNode;
  Node *LeftNode;

  Node(int k) {
    this->Data = k;
    this->LeftNode = nullptr;
    this->RightNode = nullptr;
  }
};

class Tree {
private:
  Node *head;

public:
  // Constructor
  Tree();
  Tree(int k);
  // Insert
  void insert(int k);
  void insert(Node *n);

  Node *search(int k);

  void remove(int k);

  void traversal(Node *n);
  void display();
};
