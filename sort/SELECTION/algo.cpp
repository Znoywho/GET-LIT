#include "algo.h"


void swap(int &a,int &b){
  int temp = a;
  a = b;
  b = temp;
}


void selection_sort(vector<int>& v){
  for (int i = 0; i < v.size() - 1; i++) { // avoid out of bound
    int min = i;
    for(int j = i + 1;j<v.size();j++){
      if(v[min] > v[j]) min = i;
   }
    swap(v[min],v[i]);
  }
}






