#include <algorithm>
#include<bits/stdc++.h>
#include <chrono>
#include <cmath>
#include "BUBBLE/algo.h"
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

    switch (key) {
      case 1:
        sortType = "Bubble Sort";
        bubbleSort1(value);
        break;
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << (float)duration.count()/pow(10,6);
  }
  return 0;
}
