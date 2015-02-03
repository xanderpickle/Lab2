#include "dynamicArray.h"



DynamicArray::DynamicArray(){
	capacite = 100;
	tabElements = new int[capacite];
	for (int i = 0; i < capacite; i++){
		tabElements[i] = 0;
	} 
}

DynamicArray::DynamicArray(unsigned int _capacite){
	capacite = _capacite;
	for (int i = 0; i < capacite; i++){
		tabElements[i] = 0;
	}
}

DynamicArray::~DynamicArray(){

}

unsigned int DynamicArray::getCapacite(){
	return capacite;
}

void DynamicArray::setCapacite(unsigned int _capacite){
	int* nouvelleTable = new int[_capacite]; 
	for (int i = 0; i < _capacite; i++){
		nouvelleTable[i] = 0;
	}
	for (int i = 0; i < capacite; i++) {
		nouvelleTable[i] = tabElements[i];
	}
	capacite = _capacite;
	tabElements = nouvelleTable;
	
}

int DynamicArray::getElement(unsigned int _index){
	return tabElements[_index];
}

void DynamicArray::setElement(unsigned int _index, int _valeur){
	tabElements[_index] = _valeur;
}

