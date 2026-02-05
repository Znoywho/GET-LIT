#include <bits/stdc++.h>
using namespace std;

void swap(int a,int &b){
  int temp = a;
  a = b;
  b =temp;
}


void insertion_sort(vector<int> &v){
  for (int i =  1; i < v.size(); i++) {
    
    int key = v[i];
    int j = i - 1;

    while (j >= 0 && key < v[j]) {

      v[j + 1] = v[j];
      j -= 1;

    }

    v[j+1] = key;

  }
}



int main(){
  vector<int> v = {1,2,8,9,4};
  insertion_sort(v);
  for (int i = 0; i < v.size(); i++) {
    cout << v[i] <<  " ";
  }




  return 0;
}
