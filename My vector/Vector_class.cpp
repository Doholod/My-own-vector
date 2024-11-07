#include "vector.h"
#include <vector>
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
	delete this->data;
	data = new T[this->size];
	for (size_t i = 0; i < this->size; ++i) {
		this->data[i] = other.data[i];
	}
}
// Copy assignment operatort
template <typename Type>void vector_yourself<Type>::operator= (const vector_yourself<Type>& other){
	if (!(*this != other)) return;
	this->size = other.size;
	delete this->data;
	this->data = new Type(this->size);
	for (size_t i = 0; i < this->size; ++i) {
		this->data[i] = other.data[i];
	}
}
//operator unequal
template <typename T_T>bool vector_yourself<T_T>::operator!=(const vector_yourself<T_T>& other) {
	if (this->data != other.data) return 1;
	else return 0;
}
