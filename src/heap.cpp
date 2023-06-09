#include "../includes/heap.hpp"
#include "../includes/utils.hpp"
#include <cstdlib>
#include <iostream>
#include <iterator>
#include <math.h>
#include <vector>

// /*
//  * P  = ceil(x-1/2)
//  * FE = 2x+1
//  * FD = 2x+2
//  */

// int main() {
//   Heap h = Heap();
//   h.add(3);
//   h.add(2);
//   h.add(1);
//   h.add(15);
//   h.add(5);
//   h.add(4);
//   h.add(45);

//   std::vector<int> v({3, 2, 1, 15, 5, 4, 45});

//   std::cout << "Max heap: ";
//   h.show();


//   std::cout << "Unordered: ";
//   print(&v);
//   std::cout << '\n';
  
//   Heap::heapsort(&v);
//   std::cout << "Ordered: ";
//   print(&v);
//   std::cout << '\n';

//   return 0;
// }