#include "BUBBLE/algo.h"
#include "HEAP/algo.h"
#include "INSERTION/algo.h"
#include "MODULE/algo.h"
#include "SELECTION/algo.h"
using namespace std;
using namespace std::chrono;

int main() {
  string sortType;
  bool flag = true;
  while (flag) {
    vector<int> value(10000);
    cout << "GENERATING ARRAY....\n";
    auto f = []() -> int { return randint<int>(1, 100000); };
    generate(value.begin(), value.end(), f);
    cout << "DONE\nCHOOSE NUMBER:\n";
    auto start = high_resolution_clock::now();
    int key;
    cin >> key;
    // Generate the test case
    switch (key) {
    case 1:
      sortType = "Bubble Sort";
      start = high_resolution_clock::now();
      bubbleSort1(value);
      break;
    case 2:
      start = high_resolution_clock::now();
      insertion_sort(value);
      sortType = "Insertion Sort";
      break;
    case 3:
      start = high_resolution_clock::now();
      selection_sort(value);
      sortType = "Selection Sort";
      break;
    case 4:
      start = high_resolution_clock::now();
      heapsort(value);
      sortType = "Heap Sort";
      break;
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);

    cout << "===================" << sortType << "===================\n";
    cout << "COMPLETE IN ";
    cout << (double)duration.count() / pow(10, 6) << "s\n\n";
  }
  return 0;
}
