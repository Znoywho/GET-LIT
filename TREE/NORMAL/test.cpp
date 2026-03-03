#include "algo.h"
int main() {
  Tree *T = new Tree();
  T->insert(9);
  T->insert(10);
  T->insert(8);
  T->display();
  cout << T->search(10);
  return 0;
}
