#include "algo.h"

void myswap(int &a, int &b) {
  int temp = a;
  a = b;
  b = temp;
}

void heapify(vector<int> a, int n, int i) {
  int v = a[0];
  while (i < n / 2) {
    int child = 2 * i + 1;
    if (child < n - 1)
      if (a[child] > a[child + 1])
        child++;
    if (v >= a[child])
      break;
    a[i] = a[child];
    i = child;
  }
  a[i] = v;
}
