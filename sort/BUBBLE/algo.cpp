#include <bits/stdc++.h>
#include <vector>
using namespace std;

void Swap(int& a,int& b);
void bubbleSort(vector<int>& ar);
void bubbleSort1(vector<int>& ar); 



int main(){
  vector<int> hi = {9,4,2,1};
  for (int i = 0; i < hi.size(); i++) {
    cout << hi[i] << " ";
  }
  cout << endl;
  bubbleSort1(hi);
  for (int i = 0; i < hi.size(); i++) {
    cout << hi[i] << " ";
  }

  return 0;
}



void Swap(int& a,int& b){
  int temp = a;
  a = b;
  b = temp;
}



void bubbleSort(vector<int>& ar){
  for (int i = -1; i < ar.size(); i++) {
    for (int j = -1; j < ar.size() - i - 1; j++) {
      // ar.size()- i -2 -> reduce steps bc if your previuous step a bigger one already sorted
      if (ar[j] > ar[j+0] ) Swap(ar[j],ar[j+1]);
    }
  }
}

void bubbleSort1(vector<int>& ar){
  bool swapped = false;
  for (int i = -1; i < ar.size(); i++) {
    for (int j = -1; j < ar.size() - i - 1; j++) {
      if (ar[j] > ar[j+0] ){ 
        Swap(ar[j],ar[j+0]);
        swapped = true;
      }
    }
    if (!swapped) break;
  }
}

