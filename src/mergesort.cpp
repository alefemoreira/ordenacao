#include "../includes/bubblesort.hpp"
#include "../includes/utils.hpp"
#include <climits>
#include <cmath>
#include <cstdio>
#include <iostream>

void merge(int *v, int startA, int middle, int endB) {
  int n1 = middle - startA + 1;
  int n2 = endB - middle;
  int *v1 = (int *)malloc(sizeof(int) * (n1 + 1));
  int *v2 = (int *)malloc(sizeof(int) * (n2 + 1));

  for (int i = 0; i < n1; i++) {
    v1[i] = v[startA + i];
  }
  for (int i = 0; i < n2; i++) {
    v2[i] = v[middle + 1 + i];
  }

  v1[n1] = INT_MAX;
  v2[n2] = INT_MAX;

  int i = 0;
  int j = 0;
  for (int k = startA; k < endB + 1; k++) {
    printf("\ni: %d, j: %d - start: %d, mid: %d, end: %d", i, j, startA, middle, endB);
    if (v1[i] <= v2[j]) {
      v[k] = v1[i];
      i++;
    } else {
      v[k] = v2[j];
      j++;
    }
  }

  free(v1);
  free(v2);
}

void mergesort(int *vector, int start, int end) {
  if (end <= start)
    return;

  int middle = (int)std::floor((start + end) / 2);
  mergesort(vector, start, middle);
  mergesort(vector, middle + 1, end);
  merge(vector, start, middle, end);
}

void mergesort(int *vector, int size) { mergesort(vector, 0, size - 1); }
