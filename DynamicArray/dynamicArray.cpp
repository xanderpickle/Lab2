#include "dynamicArray.h"
#include <algorithm>
#include <stdexcept>


DynamicArray::DynamicArray(){
	capacite = 100;
	tabElements = new int[capacite];
	for (int i = 0; i < capacite; i++){
		tabElements[i] = 0;
	} 
}

DynamicArray::DynamicArray(unsigned int _capacite){
	if (_capacite < 1){
		throw std::invalid_argument("Capacité en dessous de 1.");
	}
	capacite = _capacite;
	tabElements = new int[capacite];
	for (int i = 0; i < capacite; i++){
		tabElements[i] = 0;
	}
}

DynamicArray::~DynamicArray(){
	delete[] tabElements;
}

unsigned int DynamicArray::getCapacite()const{
	return capacite;
}

void DynamicArray::setCapacite(unsigned int _capacite){
	if (_capacite < 1){
		throw std::invalid_argument("Capacité en dessous de 1.");
	}

	int* nouvelleTable = new int[_capacite]; 

	if (capacite < _capacite){
		for (int i = 0; i < capacite; i++) {
			nouvelleTable[i] = tabElements[i];
		}
		for (int i = capacite; i < _capacite; i++){
			nouvelleTable[i] = 0;
		}
	}
	else{
		for (int i = 0; i < _capacite; i++) {
			nouvelleTable[i] = tabElements[i];
		}
	}
	capacite = _capacite;
	delete[] tabElements;
	tabElements = nouvelleTable;
	
}

int DynamicArray::getElement(unsigned int _index) const{
	if (_index > capacite){
		throw std::out_of_range("L'index est supérieur à la capacité.");
	}
	return tabElements[_index];
}

void DynamicArray::setElement(unsigned int _index, int _valeur){
	if (_index >= capacite){
		setCapacite(_index + 1);
	}
	
	tabElements[_index] = _valeur;
}

