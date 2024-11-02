#include "vector.h"
using namespace my_lib;
template<typename T>vector_yourself<T>::vector_yourself() {
	data = new T;
	size = 0;
}