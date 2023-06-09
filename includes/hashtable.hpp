#ifndef _HASHTABLE_H_
#define _HASHTABLE_H_

#include <cstdlib>
#include <vector>
#include "./utils.hpp"

class Hash {
private:
  int *v;
  int size;
  int f(int value) { return value % size; }        // função hash principal
  int h(int value) { return value % (size - 2); }; // função hash dupla
  int f1(int value) {
    return (f(value) + h(value)) % size;
  }; // função hash de colisão
public:
  Hash(int size) {
    v = (int *)malloc(size * sizeof(int));
    for (int i = 0; i < size; i++) {
      v[i] = 0;
    }
    this->size = size;
  }
  bool insert(int value);
  bool remove(int value);
  int find(int value);
  int findIndex(int value);
  void printHash() {
    print(this->v, size);
  }
};

#endif // _HASHTABLE_H_
