#include "../includes/utils.hpp"
#include <cstdio>
#include <cstdlib>

void print(int *vector, int size)
{
  printf("%.2d", vector[0]);
  for (int i = 1; i < size; i++)
  {
    printf(", %.2d", vector[i]);
  }
}

void swap(int *x, int *y)
{
  int temp = *x;
  *x = *y;
  *y = temp;
}

void fill(int* vector, int size) {
  for(int i = 0; i < size; i++) {
    vector[i] = rand() % 99 + 1;
  }
}

