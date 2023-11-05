#pragma once

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