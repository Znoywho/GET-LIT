#include "algo.h"

int main(int argc, char *argv[]) {
  srand(time(0));
  vector<int> value(10);
  auto f = []() -> int { return radint<int>(1, 100); };
  generate(value.begin(), value.end(), f);

  for (int x : value) {
    cout << x << " ";
  }

  buildHeap(value);

  heapsort(value);
  cout << "\nHEAP ARRAY\n";
  for (int x : value) {
    cout << x << " ";
  }

  return 0;
}
