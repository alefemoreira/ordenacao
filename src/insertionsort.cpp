#include "../includes/insertionsort.hpp"
#include <cstdio>

void shellsort(int *v, int s) {
  int k[] = {23, 17, 13, 11, 7, 5, 3, 2, 1};
  
  for(int i = 0; i < 9; i++) {
    insertionsort(v, s, k[i]);
  }  
}

void insertionsort(int *vector, int s) {
  insertionsort(vector, s, 1);
}

void insertionsort(int *v, int s, int k) {
  for (int i = 0; i < s; i+=k) {
    int j = i - k;
    int temp = v[i];

    while (temp < v[j] && j >= 0) {
      v[j + k] = v[j];
      j -= k;
    }
    v[j+k] = temp;
  }
}