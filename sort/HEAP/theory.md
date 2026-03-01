> [!NOTE]
> ***MAX HEAP***: Each node is **larger** than or equal to the key
> ***MIN HEAP***: Each node is **less** than or equal to the key

***Recusive Heapify***
```cpp
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

``` 
