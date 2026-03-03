#pragma once
#include <algorithm>
#include <chrono>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>
using namespace std;

template <class Item> Item radint(Item a, Item b) {
  int a1 = a;
  int b1 = b;
  return (rand() % (b1 - a1 + 1) + a1);
}

template <class Item> void myswap(Item &a, Item &b) {
  Item temp = a;
  a = b;
  b = temp;
}
