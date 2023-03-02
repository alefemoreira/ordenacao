#include "../includes/bubble_sort.hpp"
#include "../includes/utils.hpp"

void bubble_sort(int *vector, int size) {
  for (int i = size - 1; i > 1; i--) {
    int swaps = 0;
    for (int j = 0; j < i; j++) {
      if (vector[j + 1] < vector[j]) {
        swap(&vector[j], &vector[j + 1]);
        swaps++;
      }
    }
    if (swaps == 0)
      break;
  }
}
