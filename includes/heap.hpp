#ifndef _HEAP_H_
#define _HEAP_H_

#include "utils.hpp"
#include <algorithm>
#include <cmath>
#include <iostream>
#include <type_traits>
#include <vector>

class Heap {
private:
  std::vector<int> v;

  int parent(int i) { return std::floor((i - 1) / 2); };
  int left(int i) { return 2 * i + 1; }
  int right(int i) { return 2 * i + 2; }
  void down(int i) {
    int max_index = i;
    int l = left(i);
    int r = right(i);

    if (l < v.size() && v[l] > v[max_index]) {
      max_index = l;
    }

    if (r < v.size() && v[r] > v[max_index]) {
      max_index = r;
    }

    if (i != max_index) {
      std::swap(v[i], v[max_index]);
      down(max_index);
    }
  }
  void up(int i) {
    if (i && v[i] > v[parent(i)]) {
      std::swap(v[i], v[parent(i)]);
      up(parent(i));
    }
  }

public:
  Heap() { this->v = std::vector<int>(); }
  // ~Heap();
  void add(int value) {
    v.push_back(value);
    up(v.size() - 1);
  }
  int getMax() { return v[0]; }
  void pop() {
    std::swap(v[0], v[v.size() - 1]);
    v.pop_back();
    down(0);
  }
  void show() {
    for (auto it = v.begin(); it < v.end(); it++) {
      std::cout << *it << ' ';
    }

    std::cout << '\n';
  }
  static void heapsort(std::vector<int> *v) {
    Heap h;
    for (auto it = v->begin(); it < v->end(); it++) {
      h.add(*it);
    }

    for (int i = 0; i < v->size(); i++) {
      (*v)[v->size() - i - 1] = h.getMax();
      h.pop();
    }
  }
};

void heapsort(int *v, int size);

#endif // _HEAP_H_
