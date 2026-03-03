#include "algo.h"

// int randint(int a, int b) { return (rand() % (b - a + 1) + a); }
//
// void myswap(int &a, int &b) {
//   int test = a;
//   a = b;
//   b = test;
// }

void shellSort(vector<int> &a) {
  int n = a.size();
  int h;
  for (int h = 1; h <= (n - 1) / 9;)
    h = 3 * h + 1;
  for (; h > 0; h /= 3)
    for (int i = h; i <= n - 1; i++) {
      int j = i;
      int v = a[i];
      while (j >= h && v < a[j - h]) {
        a[j] = a[j - h];
        j -= h;
      }
      a[j] = v;
    }
}
