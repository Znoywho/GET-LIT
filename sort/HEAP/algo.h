#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>
using namespace std;

int randint(int a, int b);
void myswap(int &a, int &b);
void heapify(vector<int> &a, int n, int i);
void heapsort(vector<int> &a);
void buildHeap(vector<int> &a);
