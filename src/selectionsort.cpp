#include "../includes/selectionsort.hpp"
#include "../includes/utils.hpp"

void selectionsort(int *vector, int size) {
  for (int i = 0; i < size; i++) {
    int selected = select(vector, size, i);
    if (selected != 0)
      swap(vector + i, vector + selected);
  }
}

int select(int *vector, int size, int index) {
  int lessValueIndex = index;
  for (int i = index + 1; i < size; i++) {
    if (vector[i] < vector[lessValueIndex])
      lessValueIndex = i;
  }

  return lessValueIndex;
}