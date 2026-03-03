#include "../MODULE/algo.h"

#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>
using namespace std;

void heapify(vector<int> &a, int n, int i);
void heapsort(vector<int> &a);
void buildHeap(vector<int> a);
