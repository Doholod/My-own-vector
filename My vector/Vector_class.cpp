#include "vector.h"
using namespace my_lib;
//Basic constructor	
template<typename Type>vector_yourself<Type>::vector_yourself() {
	data = nullptr;
	size = 0;
}
//Make array with size (n)
template<typename Type>vector_yourself<Type>::vector_yourself(size_t n) {
	data = new Type[n];
	size = n;
}
//Destuctor
template<typename Type>vector_yourself<Type>::~vector_yourself() {
	delete data;	
}
//Copy constructor
template<typename Type>vector_yourself<Type>::vector_yourself(const vector_yourself& other) {
	this->size = other.size;
	delete this->data;
	data = new Type[this->size];
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
template <typename Type>bool vector_yourself<Type>::operator!=(const vector_yourself<Type>& other) {
	if (!(*this == other)) return 1;
	else return 0;
}
//operator plus
template <typename Type>void vector_yourself<Type>::operator+(const vector_yourself<Type>& other) {
	Type* new_data = new Type(this->size + other.size);
	for (size_t i = 0; i < this->size; ++i) {
		new_data[i] = this->data[i];
	}
	for (size_t i = 0; i < other.size; ++i) {
		new_data[this->size + i] = other.data[i];
	}
	delete this->data;
	this->data = new_data;
}
//operator ==
template <typename Type>bool vector_yourself<Type>::operator==(const vector_yourself<Type>& other) {
	if (this->data == other.data && this->size == other.size) return true;
	else return false;
}
//constructor move
template<typename Type>vector_yourself<Type>::vector_yourself(vector_yourself<Type>&& other) {
	this->data = other.data;
	delete other.data;
	this->size = other.size;
	other.size = 0;
}
//operator move
template <typename Type>void vector_yourself<Type>::operator=(vector_yourself&& other) {
	delete this->data;
	this->data = other.data;
	delete other.data;
	this->size = other.size;
	other.size = 0;
}
template<typename Type>void vector_yourself<Type>::operator*(size_t number) {
	if (number == 1) return;
	else if (number == 0) {
		delete this->data;
		this->size = 0;
		return;
	}
	Type* new_data = new Type(this->size*number);
	for (int i = 0; i < number; ++i) {
		for (int j = 0; j < this->size; ++j) {
			new_data[(this->size) * i + j] = this->data[j];
		}
	}
	delete this->data;
	this->data = new_data;
	this->size *= number;
}