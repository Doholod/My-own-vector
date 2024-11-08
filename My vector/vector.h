#pragma once
namespace my_lib {
	//Class with dinamic array
	template <typename Type>
	class vector_yourself
	{
	public:
		//base constructors
		vector_yourself();
		vector_yourself(size_t f);

		//destructor
		~vector_yourself();

		//constructor copy
		vector_yourself(const vector_yourself& other);

		// Move constructor
		vector_yourself(vector_yourself&& other);
		
		//Move assignment operator
		void operator=( vector_yourself&& other)noexcept;

		// Copy assignment operator
		void operator=(const vector_yourself<Type>& other1);
		bool operator==(const vector_yourself<Type>& other1);
		bool operator!=(const vector_yourself<Type>& other1);
		//Repeat data number number of times
		void operator*(size_t number);
		void operator+ (const vector_yourself<Type>& other1);
	private:
		Type* data;
		size_t size;
	};
	 
}