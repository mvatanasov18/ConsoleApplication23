#include "Set.h"
#include <iostream>
#include <algorithm>

void Set::display()
{
	for (int i = 0; i < this->size; i++)
	{
		std::cout << this->elements[i] << " ";
	}
}

bool Set::contains(int n)
{
	for (int i = 0; i < this->size; i++)
	{
		if (this->elements[i] == n)
		{
			return true;
		}
	}
	return false;
}

void Set::sort()
{
	std::sort(elements, elements + size);
}

void Set::enterFromKeyboard()
{
	std::cout << "Enter the size of the array" << std::endl;
	std::cin >> this->size;
	this->elements = new int[this->size];
	for (int i = 0; i < this->size; i++)
	{
		int temp;
		std::cin >> temp;
		this->elements[i] = temp;
	}
}

