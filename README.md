# Sort Algorithms

## Algorithms

|Name     |Type  |Complexity  |Best case|Medium Case|
|---------|------|------------|---------|-----------|
|Selection|Simple|O(n²)       |O(n²)    |O(n²)      |
|Insertion|Simple|O(n²)       |O(n)     |O(n²)      |
|Bubble   |Simple|O(n²)       |O(n)     |O(n²)      |

## Selection Sort

This algorithm splits the array in two side: sorted and unsorted. At start of execution, the begin of sorted part is the 0-index, and the unsorted part is all the array.

The array is iterated from begin to end searching for the smaller element. When find, the smaller swap its value with the valur with 

Type: Simple
Complexity: O(n²)
Complexity in best case: O(n²)
Complexity in medium case: O(n²)

## Insertion Sort

This algorithm splits the array in two side: sorted and unsorted. At start of execution, the begin of sorted part is the 0-index, and the unsorted part is all the array.

The array is iterated from start to the end. Each element is inserted in the sorted part in correct position. At the end of execution, the sorted part will have the size of the vector.

Type: Simple
Complexity: O(n²)
Complexity in best case: O(n)
Complexity in medium case: O(n²)

## Bubble Sort

The Bubble Sort also splits the array in two partes: sorted and unsorted. To begin, the algorithm starts in 0-index and verifies if the next element is less than the current, if true, its values are swaped and the verification in made to 1-index an so on... This is do until the size of the sorted part to be the same of array or until none swap happen.

Type: Simple
Complexity: O(n²)
Complexity in best case: O(n)
Complexity in medium case: O(n²)


