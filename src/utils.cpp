#include "../includes/utils.hpp"
#include <climits>
#include <cstdint>
#include <cstdio>
#include <cstdlib>

void print(int *vector, int size) {
  printf("%.3d", vector[0]);
  for (int i = 1; i < size; i++) {
    printf(", %.3d", vector[i]);
  }
}

void print(std::vector<int> *vector) {
  printf("%.3d", *vector->begin());
  for (auto it = vector->begin() + 1; it < vector->end(); it++) {
    printf(", %.3d", *it);
  }
}

void swap(int *x, int *y) {
  int temp = *x;
  *x = *y;
  *y = temp;
}

void fill(int *vector, int size) {
  for (int i = 0; i < size; i++) {
    vector[i] = rand() % 999 + 1;
  }
}
