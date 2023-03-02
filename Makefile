CC = g++

all:
	$(CC) src/main.cpp src/utils.cpp src/insertion_sort.cpp src/selection_sort.cpp src/bubble_sort.cpp -o build/sort_app.o
