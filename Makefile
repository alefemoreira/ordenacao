CC = g++

all:
	$(CC) src/main.cpp src/utils.cpp src/insertionsort.cpp src/selectionsort.cpp src/bubblesort.cpp src/mergesort.cpp -g -o build/sort_app.o
