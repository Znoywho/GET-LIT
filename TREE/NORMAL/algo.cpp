#include "algo.h"

Tree::Tree() { this->head = nullptr; }
Tree::Tree(int k) { this->head = new Node(k); }

void Tree::insert(int k) {
  if (this->head == nullptr) {
    this->head = new Node(k);
    return;
  }

  Node *p = this->head;
  while (p != nullptr) {
    if (k < p->Data && p->LeftNode != nullptr)
      p = p->LeftNode;
    else if (k > p->Data && p->RightNode != nullptr)
      p = p->RightNode;
    else
      break;
  }
  if (k < p->Data)
    p->LeftNode = new Node(k);
  else
    p->RightNode = new Node(k);
}

Node *Tree::search(int k) {
  Node *p = this->head;
  while (p != nullptr) {
    if (k < p->Data)
      p = p->LeftNode;
    else if (k > p->Data)
      p = p->RightNode;
    else
      return p;
  }
  return nullptr;
}

void Tree ::remove(int k) {}

void Tree::traversal(Node *p) {
  if (p == nullptr)
    return;
  traversal(p->RightNode);
  cout << p->Data << '\n';
  traversal(p->LeftNode);
}

void Tree::display() { this->traversal(this->head); }
