#include <vector>
#include <iostream>
#include <utility>

 
template <typename T>
int BusquedaBinaria (T X, std::vector<T> V, T ini, T fin){
	if(ini > fin){
		std::cout << "Error en el array" << std::endl;
	}
	T medio = (ini + fin) / 2;
	if (V[medio] == X){
		return medio;
	} else if (V[medio] > X){
		return BusquedaBinaria(X, V, ini, medio - 1);
	} else {
		return BusquedaBinaria(X, V, medio + 1, fin);
	}
}


template <typename T>
int BusquedaBinaria_INV (T X, std::vector<T> V, T ini, T fin){
	if(ini > fin){
		std::cout << "Error en el array" << std::endl;
	}
	T medio = (ini + fin) / 2;
	if (V[medio] == X){
		return medio;
	} else if (V[medio] > X){
		return BusquedaBinaria(X, V, medio +1, fin);
	} else {
		return BusquedaBinaria(X, V, ini, medio -1);
	}
}


template <typename T>
int Partition (std::vector<T>& V, T ini, T fin){
	T x = V[fin];
	T i = ini;
	for (T j = ini; j < fin -1; j++){
		if (V[j] <= x){
			std::swap(V[i], V[j]);
			i++;
		}
	}
	std::swap(V[i], V[fin]);
	return i;
}

template <typename T>
void QuickSort (std::vector <T>& V, T ini, T fin){ 
	if (ini < fin){
		T pivot = Partition(V, ini, fin);
		QuickSort(V, ini, pivot -1);
		QuickSort(V, pivot +1, fin);
	}
}
