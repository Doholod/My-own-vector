#include "vector.h"
using namespace my_lib;
//Basic constructor	
template<typename T>vector_yourself<T>::vector_yourself() {
	data = nullptr;
	size = 0;
}
//Make array with size (n)
template<typename T>vector_yourself<T>::vector_yourself(size_t n) {
	data = new T[n];
	size = n;
}
//Destuctor
template<typename T>vector_yourself<T>::~vector_yourself() {
	delete data;	
}
//Copy constructor
template<typename T>vector_yourself<T>::vector_yourself(const vector_yourself& other) {
	this->size = other.size;
	delete data;
	data = new T[this->size];
	for (size_t i = 0; i < this->size; ++i) {
		this->data[i] = other.data[i];
	}
}

