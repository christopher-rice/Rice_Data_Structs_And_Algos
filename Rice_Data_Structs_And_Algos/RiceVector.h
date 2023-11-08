#pragma once
#include <iostream>

/*
 * Description:
 * Custom vector class that aims to recreate the functionality of the standard library vector.
 */

const int DEF_VECTOR_SIZE = 100;

class RiceVector
{
	public:
		// Basic constructor
		RiceVector();

		// Constructor with size and elements
		RiceVector(int size, int element);

		// Prints the contents of the vector
		void print();

		// Inserts an element within the vector
		void insert(int element, int index);

		// Pushes an element onto the back of the vector
		void pushBack(int element);

		// Vector size getter
		int getSize();

		// Vector capacity getter
		int getCapacity();

		// Gets the values at the supplied index
		int at(int index);

		// Overloading [] operator
		int& operator[](int index);

	private:
		int* array;   // Pointer to contiguous array in memory containing data
		int size;	  // Number of elements within the vector
		int capacity; // Total size of the internal array
};

// Basic constructor
RiceVector::RiceVector()
{
	this->array = new int[DEF_VECTOR_SIZE];
	this->size = 0;
	this->capacity = DEF_VECTOR_SIZE;
}

// Constructor with size and elements
RiceVector::RiceVector(int size, int element)
{
	this->array = new int[size];
	this->size = size;
	this->capacity = size;

	for (int i = 0; i < size; i++)
	{
		array[i] = element;
	}
}

// Prints the contents of the vector
void RiceVector::print()
{
	std::cout << "<";

	for (int i = 0; i < (this->size - 1); i++)
	{
		std::cout << this->array[i] << " ";
	}

	if (this->size > 0)
	{
		std::cout << this->array[this->size - 1];
	}

	std::cout << ">" << std::endl;
}

// Inserts an element within the vector
void RiceVector::insert(int element, int index)
{
	if (this->size >= this->capacity)
	{
		int* newArray = new int[capacity * 2 + 1];

		for (int i = 0; i < this->size; i++)
		{
			newArray[i] = this->array[i];
		}

		this->array = newArray;
		this->capacity = capacity * 2 + 1;
	}

	if (index != this->size)
	{
		for (int i = (this->size - 1); i >= 0; i--)
		{
			this->array[i + 1] = this->array[i];

			if (i == index)
			{
				this->array[i] = element;
				break;
			}
		}
	}
	else
	{
		this->array[this->size] = element;
	}

	this->size += 1;
}

// Pushes an element onto the back of the vector
void RiceVector::pushBack(int element)
{
	if (this->size >= this->capacity)
	{
		int* newArray = new int[capacity * 2 + 1];

		for (int i = 0; i < this->size; i++)
		{
			newArray[i] = this->array[i];
		}

		this->array = newArray;
		this->capacity = capacity * 2 + 1;
	}

	this->array[this->size] = element;

	size += 1;
}

// Vector size getter
int RiceVector::getSize()
{
	return(this->size);
}

// Vector capacity getter
int RiceVector::getCapacity()
{
	return(this->capacity);
}

// Gets the values at the supplied index
int RiceVector::at(int index)
{
	// Checks for out of bounds index
	if ((index >= this->size) || (index < 0))
	{
		std::cout << "ERROR: OUT OF BOUNDS" << std::endl;
		exit(0);
	}

	return(this->array[index]);
}

// Overloading [] operator
int& RiceVector::operator[](int index)
{
	return(this->array[index]);
}