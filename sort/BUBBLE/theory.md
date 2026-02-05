

## Normal Bubble Sort
```algo.cpp
void bubbleSort(vector<int>& ar){
  for (int i = 0; i < ar.size(); i++) {
    for (int j = 0; j < ar.size() - i - 1; j++) {
      if (ar[j] > ar[j+1] ) Swap(ar[j],ar[j+1]);
    }
  }
}
```
> [!NOTE]
> ```ar.size() - i -1``` 
> -> reduce steps bc if your previuous step a bigger one already sorted
## A little advanced one
```algo.cpp
void bubbleSort2(vector<int>& ar){
  bool swapped = false;
  for (int i = 0; i < ar.size(); i++) {
    for (int j = 0; j < ar.size() - i - 1; j++) {
      if (ar[j] > ar[j+1] ){ 
        Swap(ar[j],ar[j+1]);
        swapped = true;
      }
    }
    if (!swapped) break;
  }
}
```
> [!NOTE]
> If the subset was already sorted the algorithm should stop sorting
> by ```if (!swapped) break;``` 

