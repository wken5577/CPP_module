#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>

template <typename T>
class Array
{
private:
	T* arr;
	int sizeArr;

public:
	Array()
	:sizeArr(1)
	{
		arr = new T[1];
	}

	Array(unsigned int n)
	:sizeArr(n)
	{
		arr = new T[n];
	}

	Array(const Array &data)
	{
		*this = data;
	}

	~Array()
	{
		if (arr)
			delete[] arr;
	}

	Array & operator= (const Array &data)
	{
		if (arr)
			delete[] arr;
		T *newArr = new T[data.size()];
		for(int i = 0; i < data.size(); i++)
			newArr[i] = data.arr[i];
		this->arr = newArr;
		this->sizeArr = data.sizeArr;
		return *this;
	}

	T& operator[] (int idx)
	{
		if (idx < 0 || idx >= sizeArr)
			throw std::exception();
		return arr[idx];
	}

	int size() const
	{
		return sizeArr;
	}
};

#endif