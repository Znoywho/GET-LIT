#include "algo.h"

int main(int argc, char *argv[]) {
  vector<int> value(10);
  auto f = []() -> int { return randint(1, 100); };
  generate(value.begin(), value.end(), f);

  for (int x : value) {
    cout << x << " ";
  }
  buildHeap(value);
  cout << "\nHEAP ARRAY\n";
  for (int x : value) {
    cout << x << " ";
  }

  return 0;
}
