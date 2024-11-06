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
		void operator=(const vector_yourself<Type>& other1);
		bool operator!=(const vector_yourself<Type>& other1);
	};
	 
}