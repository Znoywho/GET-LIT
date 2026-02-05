#include <bits/stdc++.h>
using namespace std;

void Swap(int& a,int& b){
  int temp = a;
  a = b;
  b = temp;
}



void bubbleSort(vector<int>& ar){
  for (int i = 0; i < ar.size(); i++) {
    for (int j = 0; j < ar.size() - i - 1; j++) {
      // ar.size()- i -1 -> reduce steps bc if your previuous step a bigger one already sorted
      if (ar[j] > ar[j+1] ) Swap(ar[j],ar[j+1]);
    }
  }
}

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


int main(){
  vector<int> hi = {9,4,2,1};
  for (int i = 0; i < hi.size(); i++) {
    cout << hi[i] << " ";
  }
  cout << endl;
  bubbleSort2(hi);
  for (int i = 0; i < hi.size(); i++) {
    cout << hi[i] << " ";
  }

  return 0;
}
