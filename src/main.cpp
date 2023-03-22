#include "../includes/bubblesort.hpp"
#include "../includes/insertionsort.hpp"
#include "../includes/selectionsort.hpp"
#include "../includes/utils.hpp"
#include "../includes/mergesort.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>

int main(int argc, char **argv) {
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
  default:
    std::cout << "You send an invalid sort type. 0 selection; 1 insertion";
  }

  int vector[size];

  fill(vector, size);

  std::cout << "\nUnordered vector: ";
  print(vector, size);

  switch (sort) {
  case 0:
    selectionsort(vector, size);
    break;
  case 1:
    insertionsort(vector, size);
    break;
  case 2:
    bubblesort(vector, size);
    break;
  case 3:
    mergesort(vector, size);
    break;
  default:
    std::cout << "You send an invalid sort type. Select of of below options:\n";
    std::cout << "SELECTION SORT  : 0\n";
    std::cout << "INSERTION SORT  : 1\n";
    std::cout << "BUBBLE SORT     : 2\n";
    std::cout << "MERGE SORT      : 3\n";

    return 1;
  }
  std::cout << "\n  Ordered vector: ";
  print(vector, size);
  std::cout << "\n";

  return 0;
}