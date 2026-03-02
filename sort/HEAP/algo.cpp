#include "algo.h"

// return the interger between a <= i <= b
int randint(int a, int b) { return (rand() % (b - a + 1) + a); }

void myswap(int &a, int &b) {
  int temp = a;
  a = b;
  b = temp;
}

// MAX HEAP
void heapify(vector<int> &a, int n, int i) {
  int v = a[i]; // Initializing
  while (i < n / 2) {
    // left child
    int child = 2 * i + 1;
    if (child < n - 1)
      if (a[child] < a[child + 1]) // comparison between left and right childs
        child++;
    if (v >= a[child]) // set key
      break;
    // swapping
    a[i] = a[child];
    i = child; // change i
  }
  a[i] = v;
}

void heapsort(vector<int> &a) {
  int n = a.size();
  int startIdx = n / 2 - 1;
  // build binary heap
  for (int i = startIdx; i >= 0; i--) {
    heapify(a, n, i);
  }

  while (n > 1) {
    myswap(a[0], a[n - 1]);
    n--;
    heapify(a, n, 0);
  }
}

void buildHeap(vector<int> a) {
  int n = a.size();
  int startIdx = (n / 2) - 1;

  for (int i = startIdx; i >= 0; i--) {
    heapify(a, n, i);
  }

  cout << "\nBUILD HEAP ARRAY\n";
  for (int x : a) {
    cout << x << " ";
  }
}
