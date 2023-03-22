#include "../includes/quicksort.hpp"
#include "../includes/utils.hpp"

void quicksort(int *vector, int size) { quicksort(vector, 0, size - 1); }

void quicksort(int *vector, int start, int end) {
  if (end <= start)
    return;
  int pivot = partition(vector, start, end);
  // print(vector, start, end);
  quicksort(vector, start, pivot - 1);
  quicksort(vector, pivot + 1, end);
}

int partition(int *vector, int start, int end) {
  int pivot = end;
  int i = start;
  for (int j = start; j < end; j++) {
    if (vector[j] <= vector[pivot]) {
      swap(vector + j, vector + i);
      i++;
    }
  }
  swap(vector + i, vector + pivot);
  return i;
}