#include <iostream>
#include <vector>
#include <chrono>

#include "DyV.h"

int main(){

	std::vector<int> x1{1,2,3,4,5,6,7,8,9};
	int a1 = 2;
	int ini1 = 0;
	int fin1 = 5;
	size_t b1 = x1.size();
	BusquedaBinaria(a1, x1, ini1, fin1);
	std::cout << "El vector es: ";
	for (int i = 0; i < b1; i++){
		std::cout << x1[i];
	}
	std::cout << "\n";

	std::vector<float> x2{9,8,7,6,5,4,3,2,1};
	float a2 = 2;
	float ini2 = 0;
	float fin2 = 5;
	size_t b2 = x2.size();
	BusquedaBinaria_INV(a2, x2, ini2, fin2);
	std::cout << "El vector es: ";
	for (int i = 0; i < b2; i++){
		std::cout << x2[i];
	}
	std::cout << "\n";


	std::vector<int> x3{4,3,5,2,8,1,6};
	int ini3 = 0;
	size_t b3 = x3.size();
	int fin3 = b3 - 1;
	std::cout << "El vector es: ";
	for (int i = 0; i < b3; i++){
		std::cout << x3[i];
	}
	std::cout << "\n";


	auto start = std::chrono::system_clock::now();
	QuickSort(x3, ini3, fin3);
	auto end = std::chrono::system_clock::now();

	std::cout << "El vector tras el QuickSort: ";
	for (int i = 0; i < b3; i++){
		std::cout << x3[i];
	}
	std::cout << "\n";

	std::chrono::duration<float, std::milli> duration = end -start;
	std::cout << "Time: " << duration.count() << "ms" << std::endl;
	
	return 0;
}
