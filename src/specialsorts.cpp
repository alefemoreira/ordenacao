#include "../includes/specialsorts.hpp"
#include <iostream>
#include <vector>

void countingsort(std::vector<int> *v) {
  int greatest = 0;

  std::cout << "H3";
  for (auto it = v->begin(); it < v->end(); it++)
    if (*it > greatest)
      greatest = *it;

  std::vector<int> *b = new std::vector<int>(greatest + 1, 0);
  std::vector<int> *c = new std::vector<int>(v->size());

  std::cout << "H2";
  for (auto it = v->begin(); it < v->end(); it++)
    (*b)[*it]++;

  std::cout << "H1";
  for (auto it = b->begin() + 1; it < b->end(); it++)
    (*b)[*it] += (*b)[*it - 1];

  std::cout << "H";
  for (auto it = b->end(); it > v->begin(); it--) {
    (*c)[(*b)[*it] - 1] = *it;
    (*b)[*it] -= 1;
  }

  for (int i = 0; i < c->size(); i++) {
    v[i] = c[i];
  }

  delete b;
  delete c;
}

void radixsort(std::vector<int> *v) {}

void bucketsort(std::vector<int> *v) {}