#include "../includes/bubble_sort.hpp"
#include "../includes/insertion_sort.hpp"
#include "../includes/selection_sort.hpp"
#include "../includes/utils.hpp"
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
  int vector[size];

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
  default:
    std::cout << "You send an invalid sort type. 0 selection; 1 insertion";
  }

  fill(vector, size);

  std::cout << "\nUnordered vector: ";
  print(vector, size);

  switch (sort) {
  case 0:
    selection_sort(vector, size);
    break;
  case 1:
    insertion_sort(vector, size);
    break;
  case 2:
    bubble_sort(vector, size);
    break;
  default:
    std::cout << "You send an invalid sort type. Select of of below options:\n";
    std::cout << "SELECTION SORT  : 0\n";
    std::cout << "INSERSTION SORT : 1\n";
    std::cout << "BUBBLE SORT     : 2\n";

    return 1;
  }
  std::cout << "\nOrdered vector  : ";
  print(vector, size);
  std::cout << "\n";

  return 0;
}