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
		vector_yourself();
	};
}