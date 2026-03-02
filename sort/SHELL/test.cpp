#include "algo.h"

int main(int argc, char *argv[]) {
  srand(time(0));
  vector<int> value(11);
  auto f = []() -> int { return randint(1, 100); };
  generate(value.begin(), value.end(), f);

  for (int x : value) {
    cout << x << " ";
  }

  shellSort(value);

  cout << "\n=========SORTED ARRAY===========\n";
  for (int x : value) {
    cout << x << " ";
  }

  return 0;
}
