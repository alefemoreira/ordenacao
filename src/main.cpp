#include "../includes/bubblesort.hpp"
#include "../includes/heap.hpp"
#include "../includes/hashtable.hpp"
#include "../includes/insertionsort.hpp"
#include "../includes/mergesort.hpp"
#include "../includes/selectionsort.hpp"
#include "../includes/specialsorts.hpp"
#include "../includes/utils.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>

int main() {
  Hash h {100};
  h.printHash();
  std::cout << '\n';
  h.insert(1001);
  h.insert(201);
  h.insert(301);
  h.insert(401);
  h.printHash();
  int a = h.find(401);
  std::cout << '\n';
  std::cout << "Valor encontrado: " << a << "\n";
  int index = h.findIndex(401);
  std::cout << "index encontrado: " << index << "\n";
  return 0;
}

int main1(int argc, char **argv) {
  if (argc < 2) {
    std::cout << "\nyou must indicate the size of vector and sort type: 0 "
                 "selection; 1 insertion\n";
    return 1;
  }

  srand((unsigned)time(0));

  int sort = atoi(argv[1]);
  int size = atoi(argv[2]);

  switch (sort) {
  case 0:
    std::cout << "----- SELECTION SORT -----";
    break;
  case 1:
    std::cout << "----- INSERTION SORT -----";
    break;
  case 2:
    std::cout << "----- BUBBLE SORT -----";
    break;
  case 3:
    std::cout << "----- MERGE -----";
    break;
  case 4:
    std::cout << "----- COUNTING -----";
    break;
  default:
    std::cout << "You send an invalid sort type. 0 selection; 1 insertion";
  }

  int vec[size];

  fill(vec, size);

  std::vector<int> *v = new std::vector<int>(vec, vec - 1 + size);

  std::cout << "\nUnordered vector: ";
  print(vec, size);

  switch (sort) {
  case 0:
    selectionsort(vec, size);
    break;
  case 1:
    insertionsort(vec, size);
    break;
  case 2:
    bubblesort(vec, size);
    break;
  case 3:
    mergesort(vec, size);
    break;
  case 4:
    std::cout << "H5";

    countingsort(v);
    std::cout << "\n  Ordered vector: ";
    print(v);
    std::cout << "\n";
    return 0;
  default:
    std::cout << "You send an invalid sort type. Select of of below options:\n";
    std::cout << "SELECTION SORT  : 0\n";
    std::cout << "INSERTION SORT  : 1\n";
    std::cout << "BUBBLE SORT     : 2\n";
    std::cout << "MERGE SORT      : 3\n";
    std::cout << "COUNTING SORT   : 4\n";

    return 1;
  }
  std::cout << "\n  Ordered vector: ";
  print(vec, size);
  std::cout << "\n";

  return 0;
}