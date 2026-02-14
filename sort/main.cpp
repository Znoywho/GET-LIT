#include <bits/stdc++.h>
#include "BUBBLE/algo.h"
#include "INSERTION/algo.h"
#include "SELECTION/algo.h"

using namespace std;
using namespace std::chrono;


int main(){
  string sortType;
  bool flag = true;
  while (flag) {

    
    vector<int> value(1000);
    auto f = []() -> int { return rand() % 10000; };
    generate(value.begin(),value.end(),f);
    auto start = high_resolution_clock::now();
    int key; cin >> key;
    // Generate the test case 
    switch (key) {
      case 1:
        sortType = "Bubble Sort";
        bubbleSort1(value);
        break;
      case 2:
        insertion_sort(value);
        sortType = "Insertion Sort";
        break;
      case 3:
        selection_sort(value);
        sortType = "Insertion Sort";
        break; 
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);

    cout << "===================" << sortType << "===================\n";
    cout << (float)duration.count()/pow(10,6) << "\n";
  }
  return 0;
}
