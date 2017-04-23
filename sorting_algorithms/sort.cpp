#include<ctime>
#include<iostream>
#include<utility>
#include "sort.h"

void fill_array(int * arr, int size, int range)
{
	srand(time(0));
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % range + 1;
	}
}

void show_array(const int * arr, int size)
{
	std::cout << "Sorted array:\n";
	for (int i = 0; i < size; i++) {
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}

//different alghoritms of sorting
void select_sort(int * arr, int size)
{
	int i, j;
	for (j = 0; j < size; j++) {
		int min_idx = j;
		for (i = j + 1; i < size; i++) {
			if (arr[i] < arr[min_idx]) {
				min_idx = i;
			}
		}
		std::swap(arr[j], arr[min_idx]);
	}
}

void bubble_sort(int * arr, int size) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size - 1 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				std::swap(arr[j], arr[j + 1]);
			}
		}
	}
}

void insert_sort(int * arr, int size) {
	for (int i = 1; i < size; i++) {
		for (int j = i; j > 0 && arr[j - 1] > arr[j]; j--) {
			std::swap(arr[j - 1], arr[j]);
		}
	}
}

void gnom_sort(int * arr, int size) {
	int i = 0;
	while (i < size) {
		if (i == 0 || arr[i - 1] <= arr[i]) {
			++i;
		}
		else {
			std::swap(arr[i], arr[i - 1]);
			--i;
		}
	}
}