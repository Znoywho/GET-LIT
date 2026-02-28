#include "algo.h"

int randint(int a, int b) {
  // srand(time(0));
  return (rand() % (b - a + 1) + a);
}

void myswap(int &a, int &b) {
  int temp = a;
  a = b;
  b = temp;
}

// Min heap
// void heapify(vector<int> a, int n, int i) {
//   int v = a[0];
//   while (i < n / 2) {
//     int child = 2 * i + 1;
//     if (child < n - 1)
//       if (a[child] > a[child + 1])
//         child++;
//     if (v >= a[child])
//       break;
//     a[i] = a[child];
//     i = child;
//   }
//   a[i] = v;
// }

void heapify(vector<int> &a, int n, int i) {
  // Index of the Largest Element in list
  int largest = i;
  int l = 2 * i + 1;
  int r = 2 * i + 2;

  if (l < n && a[l] > a[largest])
    largest = l;

  if (r < n && a[r] > a[largest])
    largest = r;
  // Keep on finding the largest element
  if (largest != i) {
    myswap(a[i], a[largest]);
    heapify(a, n, i);
  }
}

void buildHeap(vector<int> &a) {
  int n = a.size();
  int startIdx = (n / 2) - 1;

  for (int i = startIdx; i >= 0; i--) {
    heapify(a, n, i);
  }
}
