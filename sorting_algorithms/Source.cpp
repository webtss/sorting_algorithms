#include<iostream>
#include"sort.h"

using std::cout;
using std::cin;
using std::endl;

int main() {
	const int arr_size = 80;
	int arr[arr_size];
	fill_array(arr, arr_size, 1000); // 80 elements in range (0;1000]
	gnom_sort(arr, arr_size);
	show_array(arr, arr_size);
	system("pause");
	return 0;
}