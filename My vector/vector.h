#pragma once
namespace my_lib {
	//Class with dinamic array
	template <typename Type>
	class vector_yourself
	{
	private:
		Type* data;
		size_t size;
	public:
		//base constructors
		vector_yourself();
		vector_yourself(size_t f);
		//destructor
		~vector_yourself();
		//constructor copy
		vector_yourself(const vector_yourself& other);
		// Copy assignment operator
		template <typename T>
		vector_yourself& operator= (const vector_yourself<T>& other1);
	};
}