#include "../includes/insertion_sort.hpp"
#include <cstdio>

void insertion_sort(int *vector, int size) {
  for (int i = 0; i < size; i++) {
    int j = i - 1;
    int temp = vector[i];

    while (temp < vector[j] && j >= 0) {
      vector[j + 1] = vector[j];
      j--;
    }
    vector[j+1] = temp;
  }
}