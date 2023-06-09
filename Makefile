CC = g++

all:
	$(CC) src/main.cpp src/hashtable.cpp src/heap.cpp src/utils.cpp src/insertionsort.cpp src/selectionsort.cpp src/bubblesort.cpp src/mergesort.cpp src/specialsorts.cpp -g -o build/sort_app.o
