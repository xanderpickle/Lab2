#ifndef DYNAMICARRAY_H_
#define DYNAMICARRAY_H_


class DynamicArray
{

public:
	DynamicArray();
	DynamicArray(unsigned int _capacite);
	~DynamicArray();
	unsigned int getCapacite();
	void setCapacite(unsigned int _capacite);
	int getElement(unsigned int _index);
	void setElement(unsigned int _index, int _valeur);
private:
	unsigned int capacite;
	int* tabElements;
};


#endif //DYNAMICARRAY_H_